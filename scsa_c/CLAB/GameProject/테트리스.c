#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>

#define LEFT 75 //�·� �̵�    //Ű���尪��
#define RIGHT 77 //��� �̵�
#define UP 72 //ȸ��
#define DOWN 80 //soft drop
#define SPACE 32 //hard drop
#define ESC 27 //��������

#define false 0
#define true 1

#define ACTIVE_BLOCK -2 // �����ǹ迭�� ����� ����� ���µ�
#define CEILLING -1     // ����� �̵��� �� �ִ� ������ 0 �Ǵ� ���� ������ ǥ��
#define EMPTY 0         // ����� �̵��� �� ���� ������ ����� ǥ��
#define WALL 1
#define INACTIVE_BLOCK 2 // �̵��� �Ϸ�� ��ϰ�

#define MAIN_X 11 //������ ����ũ��
#define MAIN_Y 23 //������ ����ũ��
#define MAIN_X_ADJ 3 //������ ��ġ����
#define MAIN_Y_ADJ 1 //������ ��ġ����

#define STATUS_X_ADJ MAIN_X_ADJ+MAIN_X+1 //��������ǥ�� ��ġ����

//��� 4���� �迭
int blocks[7][4][4][4] = {
{{0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0},{0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0},
 {0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0},{0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0}},
{{0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0},{0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0},
 {0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0},{0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0}},
{{0,0,0,0,1,1,0,0,0,1,1,0,0,0,0,0},{0,0,0,0,0,0,1,0,0,1,1,0,0,1,0,0},
 {0,0,0,0,1,1,0,0,0,1,1,0,0,0,0,0},{0,0,0,0,0,0,1,0,0,1,1,0,0,1,0,0}},
{{0,0,0,0,0,1,1,0,1,1,0,0,0,0,0,0},{0,0,0,0,1,0,0,0,1,1,0,0,0,1,0,0},
 {0,0,0,0,0,1,1,0,1,1,0,0,0,0,0,0},{0,0,0,0,1,0,0,0,1,1,0,0,0,1,0,0}},
{{0,0,0,0,0,0,1,0,1,1,1,0,0,0,0,0},{0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,0},
 {0,0,0,0,0,0,0,0,1,1,1,0,1,0,0,0},{0,0,0,0,0,1,0,0,0,1,0,0,0,1,1,0}},
{{0,0,0,0,1,0,0,0,1,1,1,0,0,0,0,0},{0,0,0,0,0,1,0,0,0,1,0,0,1,1,0,0},
 {0,0,0,0,0,0,0,0,1,1,1,0,0,0,1,0},{0,0,0,0,0,1,1,0,0,1,0,0,0,1,0,0}},
{{0,0,0,0,0,1,0,0,1,1,1,0,0,0,0,0},{0,0,0,0,0,1,0,0,0,1,1,0,0,1,0,0},
 {0,0,0,0,0,0,0,0,1,1,1,0,0,1,0,0},{0,0,0,0,0,1,0,0,1,1,0,0,0,1,0,0}}
};

int b_type; //��� ������ ����
int b_rotation; //��� ȸ���� ����
int b_type_next; //���� ��ϰ� ����

int main_org[MAIN_Y][MAIN_X]; //�������� ������ �����ϴ� �迭 ����Ϳ� ǥ���Ŀ� main_cpy�� �����
int main_cpy[MAIN_Y][MAIN_X]; //�� maincpy�� �������� ����Ϳ� ǥ�õǱ� ���� ������ ������ ����
//main�� ��ü�� ��� ����Ϳ� ǥ������ �ʰ�(�̷��� �ϸ� ����Ͱ� �����Ÿ�)
//main_cpy�� �迭�� ���ؼ� ���� �޶��� ���� ����Ϳ� ��ħ
int bx, by; //�̵����� ����� �����ǻ��� x,y��ǥ�� ����

int key; //Ű����� �Է¹��� Ű���� ����

int speed; //��������ӵ�
int cnt; //���� �������� ������ �� ���� ����

int new_block_on = 0; //���ο� ���� �ʿ����� �˸��� flag
int crush_on = 0; //���� �̵����� ����� �浹�������� �˷��ִ� flag
int space_key_on = 0; //hard drop�������� �˷��ִ� flag

void reset(void); //������ �ʱ�ȭ
void reset_main(void); //���� ������(main_org[][]�� �ʱ�ȭ)
void reset_main_cpy(void); //copy ������(main_cpy[][]�� �ʱ�ȭ)
void draw_map(void); //���� ��ü �������̽��� ǥ��
void draw_main(void); //�������� �׸�
void new_block(void); //���ο� ����� �ϳ� ����
void check_key(void); //Ű����� Ű�� �Է¹���
void drop_block(void); //����� �Ʒ��� ����Ʈ��
int check_crush(int bx, int by, int rotation); //bx, by��ġ�� rotationȸ������ ���� ��� �浹 �Ǵ�
void move_block(int dir); //dir�������� ����� ������
void check_line(void); //���� ����á������ �Ǵ��ϰ� ����
void check_game_over(void);

void gotoxy(int x, int y) { //gotoxy�Լ�
    COORD pos = { 2 * x,y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

typedef enum { NOCURSOR, SOLIDCURSOR, NORMALCURSOR } CURSOR_TYPE; //Ŀ������� �Լ��� ���Ǵ� ������
void setcursortype(CURSOR_TYPE c) { //Ŀ������� �Լ�
    CONSOLE_CURSOR_INFO CurInfo;

    switch (c) {
    case NOCURSOR:
        CurInfo.dwSize = 1;
        CurInfo.bVisible = FALSE;
        break;
    case SOLIDCURSOR:
        CurInfo.dwSize = 100;
        CurInfo.bVisible = TRUE;
        break;
    case NORMALCURSOR:
        CurInfo.dwSize = 20;
        CurInfo.bVisible = TRUE;
        break;
    }
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &CurInfo);
}



void reset(void) {
    key = 0;
    crush_on = 0;
    cnt = 0;
    speed = 100;

    system("cls"); //ȭ������
    reset_main(); // main_org�� �ʱ�ȭ
    draw_map(); // ����ȭ���� �׸�
    draw_main(); // �������� �׸�

    b_type_next = rand() % 7; //�������� ���� ��� ������ �����ϰ� ����
    new_block(); //���ο� ����� �ϳ� ����

}

void reset_main(void) { //�������� �ʱ�ȭ
    int i, j;

    for (i = 0;i < MAIN_Y;i++) { // �������� 0���� �ʱ�ȭ
        for (j = 0;j < MAIN_X;j++) {
            main_org[i][j] = 0;
            main_cpy[i][j] = 100;
        }
    }
    for (j = 1;j < MAIN_X;j++) { //y���� 3�� ��ġ�� õ���� ����
        main_org[3][j] = CEILLING;
    }
    for (i = 1;i < MAIN_Y - 1;i++) { //�¿� ���� ����
        main_org[i][0] = WALL;
        main_org[i][MAIN_X - 1] = WALL;
    }
    for (j = 0;j < MAIN_X;j++) { //�ٴں��� ����
        main_org[MAIN_Y - 1][j] = WALL;
    }
}

void reset_main_cpy(void) { //main_cpy�� �ʱ�ȭ
    int i, j;

    for (i = 0;i < MAIN_Y;i++) {         //�����ǿ� ���ӿ� ������ �ʴ� ���ڸ� ����
        for (j = 0;j < MAIN_X;j++) {  //�̴� main_org�� ���� ���ڰ� ���� �ϱ� ����
            main_cpy[i][j] = 100;
        }
    }
}

void draw_map(void) { //���� ���� ǥ�ø� ��Ÿ���� �Լ�
    int y = 1;             //���� ����â ��ġ ����

    gotoxy(STATUS_X_ADJ, y + 2); printf("  N E X T   ");
    gotoxy(STATUS_X_ADJ, y + 3); printf("            ");
    gotoxy(STATUS_X_ADJ, y + 4); printf("            ");
    gotoxy(STATUS_X_ADJ, y + 5); printf("            ");
    gotoxy(STATUS_X_ADJ, y + 6); printf("            ");
}

void draw_main(void) { //������ �׸��� �Լ�
    int i, j;

    for (j = 1;j < MAIN_X - 1;j++) { //õ���� ��� ���ο���� �������� �������� ���� �׷���
        if (main_org[3][j] == EMPTY) main_org[3][j] = CEILLING;
    }
    for (i = 0;i < MAIN_Y;i++) {
        for (j = 0;j < MAIN_X;j++) {
            if (main_cpy[i][j] != main_org[i][j]) { //cpy�� ���ؼ� ���� �޶��� �κи� ���� �׷���.
                //�̰� ������ ��������ü�� ��� �׷��� �������� ��¦�Ÿ�
                gotoxy(MAIN_X_ADJ + j, MAIN_Y_ADJ + i);
                switch (main_org[i][j]) {
                case EMPTY: //��ĭ���
                    printf("  ");
                    break;
                case CEILLING: //õ����
                    printf(". ");
                    break;
                case WALL: //�����
                    printf("��");
                    break;
                case INACTIVE_BLOCK: //���� �� ���
                    printf("��");
                    break;
                case ACTIVE_BLOCK: //�����̰��ִ� �� ���
                    printf("��");
                    break;
                }
            }
        }
    }
    for (i = 0;i < MAIN_Y;i++) { //�������� �׸� �� main_cpy�� ����
        for (j = 0;j < MAIN_X;j++) {
            main_cpy[i][j] = main_org[i][j];
        }
    }
}

void new_block(void) { //���ο� ��� ����
    int i, j;

    bx = (MAIN_X / 2) - 1; //��� ���� ��ġx��ǥ(�������� ���)
    by = 0;  //��� ������ġ y��ǥ(���� ��)
    b_type = b_type_next; //���������� ������
    b_type_next = rand() % 7; //���� ���� ����
    b_rotation = 0;  //ȸ���� 0������ ������

    new_block_on = 0; //new_block flag�� ��

    for (i = 0;i < 4;i++) { //������ bx, by��ġ�� ������
        for (j = 0;j < 4;j++) {
            if (blocks[b_type][b_rotation][i][j] == 1) main_org[by + i][bx + j] = ACTIVE_BLOCK;
        }
    }
    for (i = 1;i < 3;i++) { //���ӻ���ǥ�ÿ� ������ ���ú��� �׸�
        for (j = 0;j < 4;j++) {
            if (blocks[b_type_next][0][i][j] == 1) {
                gotoxy(STATUS_X_ADJ + 2 + j, i + 6);
                printf("��");
            }
            else {
                gotoxy(STATUS_X_ADJ + 2 + j, i + 6);
                printf("  ");
            }
        }
    }
}

void check_key(void) {
    key = 0; //Ű�� �ʱ�ȭ

    if (_kbhit()) { //Ű�Է��� �ִ� ���
        key = _getch(); //Ű���� ����
        if (key == 224) { //����Ű�ΰ��
            do { key = _getch(); } while (key == 224);//����Ű���ð��� ����
            switch (key) {
            case LEFT: //����Ű ��������
                if (check_crush(bx - 1, by, b_rotation) == true) move_block(LEFT);
                break;                            //�������� �� �� �ִ��� üũ �� �����ϸ� �̵�
            case RIGHT: //������ ����Ű ��������- ���� �����ϰ� ó����
                if (check_crush(bx + 1, by, b_rotation) == true) move_block(RIGHT);
                break;
            case DOWN: //�Ʒ��� ����Ű ��������-���� �����ϰ� ó����
                if (check_crush(bx, by + 1, b_rotation) == true) move_block(DOWN);
                break;
            case UP: //���� ����Ű ��������
                if (check_crush(bx, by, (b_rotation + 1) % 4) == true) move_block(UP);
                //ȸ���� �� �ִ��� üũ �� �����ϸ� ȸ��
                else if (crush_on == 1 && check_crush(bx, by - 1, (b_rotation + 1) % 4) == true) move_block(100);
            }                    //�ٴڿ� ���� ��� �������� ��ĭ����� ȸ���� �����ϸ� �׷��� ��(Ư������)
        }
        else { //����Ű�� �ƴѰ��
            switch (key) {
            case SPACE: //�����̽�Ű ��������
                space_key_on = 1; //�����̽�Ű flag�� ���
                while (crush_on == 0) { //�ٴڿ� ���������� �̵���Ŵ
                    drop_block();
                }
                break;
            case ESC: //ESC��������
                system("cls"); //ȭ���� �����
                exit(0); //��������
            }
        }
    }
    while (_kbhit()) _getch(); //Ű���۸� ���
}

void drop_block(void) {
    int i, j;

    if (crush_on && check_crush(bx, by + 1, b_rotation) == true) crush_on = 0; //���� ��������� crush flag ��
    if (crush_on && check_crush(bx, by + 1, b_rotation) == false) { //���� ��������ʰ� crush flag�� ����������
        for (i = 0;i < MAIN_Y;i++) { //���� �������� ���� ����
            for (j = 0;j < MAIN_X;j++) {
                if (main_org[i][j] == ACTIVE_BLOCK) main_org[i][j] = INACTIVE_BLOCK;
            }
        }
        crush_on = 0; //flag�� ��
        check_line(); //����üũ�� ��
        new_block_on = 1; //���ο� ������ flag�� ��
        return; //�Լ� ����
    }
    if (check_crush(bx, by + 1, b_rotation) == true) move_block(DOWN); //���� ��������� ������ ��ĭ �̵�
    if (check_crush(bx, by + 1, b_rotation) == false) crush_on++; //������ �̵��� �ȵǸ�  crush flag�� ��
}

int check_crush(int bx, int by, int b_rotation) { //������ ��ǥ�� ȸ�������� �浹�� �ִ��� �˻�
    int i, j;

    for (i = 0;i < 4;i++) {
        for (j = 0;j < 4;j++) { //������ ��ġ�� �����ǰ� ������� ���ؼ� ��ġ�� false�� ����
            if (blocks[b_type][b_rotation][i][j] == 1 && main_org[by + i][bx + j] > 0) return false;
        }
    }
    return true; //�ϳ��� �Ȱ�ġ�� true����
};

void move_block(int dir) { //����� �̵���Ŵ
    int i, j;

    switch (dir) {
    case LEFT: //���ʹ���
        for (i = 0;i < 4;i++) { //������ǥ�� ���� ����
            for (j = 0;j < 4;j++) {
                if (blocks[b_type][b_rotation][i][j] == 1) main_org[by + i][bx + j] = EMPTY;
            }
        }
        for (i = 0;i < 4;i++) { //�������� ��ĭ���� active block�� ����
            for (j = 0;j < 4;j++) {
                if (blocks[b_type][b_rotation][i][j] == 1) main_org[by + i][bx + j - 1] = ACTIVE_BLOCK;
            }
        }
        bx--; //��ǥ�� �̵�
        break;

    case RIGHT:    //������ ����. ���ʹ����̶� ���� ������ ����
        for (i = 0;i < 4;i++) {
            for (j = 0;j < 4;j++) {
                if (blocks[b_type][b_rotation][i][j] == 1) main_org[by + i][bx + j] = EMPTY;
            }
        }
        for (i = 0;i < 4;i++) {
            for (j = 0;j < 4;j++) {
                if (blocks[b_type][b_rotation][i][j] == 1) main_org[by + i][bx + j + 1] = ACTIVE_BLOCK;
            }
        }
        bx++;
        break;

    case DOWN:    //�Ʒ��� ����. ���ʹ����̶� ���� ������ ����
        for (i = 0;i < 4;i++) {
            for (j = 0;j < 4;j++) {
                if (blocks[b_type][b_rotation][i][j] == 1) main_org[by + i][bx + j] = EMPTY;
            }
        }
        for (i = 0;i < 4;i++) {
            for (j = 0;j < 4;j++) {
                if (blocks[b_type][b_rotation][i][j] == 1) main_org[by + i + 1][bx + j] = ACTIVE_BLOCK;
            }
        }
        by++;
        break;

    case UP: //Ű���� ���� �������� ȸ����Ŵ.
        for (i = 0;i < 4;i++) { //������ǥ�� ���� ����
            for (j = 0;j < 4;j++) {
                if (blocks[b_type][b_rotation][i][j] == 1) main_org[by + i][bx + j] = EMPTY;
            }
        }
        b_rotation = (b_rotation + 1) % 4; //ȸ������ 1������Ŵ(3���� 4�� �Ǵ� ���� 0���� �ǵ���)
        for (i = 0;i < 4;i++) { //ȸ���� ����� ����
            for (j = 0;j < 4;j++) {
                if (blocks[b_type][b_rotation][i][j] == 1) main_org[by + i][bx + j] = ACTIVE_BLOCK;
            }
        }
        break;

    case 100: //����� �ٴ�, Ȥ�� �ٸ� ��ϰ� ���� ���¿��� ��ĭ���� �÷� ȸ���� ������ ���
        //�̸� ���۽�Ű�� Ư������
        for (i = 0;i < 4;i++) {
            for (j = 0;j < 4;j++) {
                if (blocks[b_type][b_rotation][i][j] == 1) main_org[by + i][bx + j] = EMPTY;
            }
        }
        b_rotation = (b_rotation + 1) % 4;
        for (i = 0;i < 4;i++) {
            for (j = 0;j < 4;j++) {
                if (blocks[b_type][b_rotation][i][j] == 1) main_org[by + i - 1][bx + j] = ACTIVE_BLOCK;
            }
        }
        by--;
        break;
    }
}

void check_line(void) {
    int i, j, k, l;

    int    block_amount; //������ ��ϰ����� �����ϴ� ����
    int combo = 0; //�޺����� �����ϴ� ���� ������ �ʱ�ȭ

    for (i = MAIN_Y - 2;i > 3;) { //i=MAIN_Y-2 : ���ʺ��� ��ĭ����,  i>3 : õ��(3)�Ʒ����� �˻�
        block_amount = 0; //��ϰ��� ���� ���� �ʱ�ȭ
        for (j = 1;j < MAIN_X - 1;j++) { //���� �������� ��ϰ��縦 ��
            if (main_org[i][j] > 0) block_amount++;
        }
        if (block_amount == MAIN_X - 2) { //����� ���� �� ���
            for (k = i;k > 1;k--) { //������ ��ĭ�� ��� ����(������ õ���� �ƴ� ��쿡��)
                for (l = 1;l < MAIN_X - 1;l++) {
                    if (main_org[k - 1][l] != CEILLING) main_org[k][l] = main_org[k - 1][l];
                    if (main_org[k - 1][l] == CEILLING) main_org[k][l] = EMPTY;
                    //������ õ���� ��쿡�� õ���� ��ĭ ������ �ȵǴϱ� ��ĭ�� ����
                }
            }
        }
        else i--;
    }
}
void check_game_over(void) {
    int i;

    int x = 5;
    int y = 5;

    for (i = 1;i < MAIN_X - 2;i++) {
        if (main_org[3][i] > 0) { //õ��(������ ����° ��)�� inactive�� �����Ǹ� ���� ����

            gotoxy(x, y + 3); printf("      G A M E  O V E R..        ");
            gotoxy(x, y + 4); printf("   Press any key to restart..   ");

            Sleep(1000);
            while (_kbhit()) _getch();
            key = _getch();
            reset();
        }
    }
}

int main() {
    int i;

    srand((unsigned)time(NULL)); //����ǥ����
    setcursortype(NOCURSOR); //Ŀ�� ����
    reset(); //������ ����

    while (1) {
        for (i = 0;i < 5;i++) { //����� ��ĭ�������µ��� 5�� Ű�Է¹��� �� ����
            check_key(); //Ű�Է�Ȯ��
            draw_main(); //ȭ���� �׸�
            Sleep(speed); //���Ӽӵ�����
            if (crush_on && check_crush(bx, by + 1, b_rotation) == false) Sleep(100);
            //����� �浹���ΰ�� �߰��� �̵��� ȸ���� �ð��� ����
            if (space_key_on == 1) { //�����̽��ٸ� �������(hard drop) �߰��� �̵��� ȸ���Ҽ� ���� break;
                space_key_on = 0;
                break;
            }
        }
        drop_block(); // ����� ��ĭ ����
        check_game_over(); //���ӿ����� üũ
        if (new_block_on == 1) new_block(); // �� �� flag�� �ִ� ��� ���ο� �� ����
    }
}
