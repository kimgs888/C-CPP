

#include <stdio.h>
#include <stdlib.h>
#define  N 19

int dr[] = { 0, 1, 1, -1 };
int dc[] = { 1, 1, 0,  1 };
//�ٵ����� ���
void printPan(int p[N][N]);
//������ �̰���� üũ, 1�̸� ����, 0�̸� ���
// 6�� üũ
int isSuccess(int p[N][N], int r, int c);

int isValid(int p[N][N], int r, int c);

int main01(void)
{
    int pan[N][N] = { 0 }; //��� 0���� �ʱ�ȭ
    setbuf(stdout, NULL);
    printPan(pan);
    while (1)
    {
        int r, c;
        do
        {
            printf("���� ��ǥ�� �Է��ϼ���. (�� ��) :");
            scanf("%d %d", &r, &c);
        } while (isValid(pan, r, c) != 1);
        pan[r][c] = 1;
        printPan(pan);
        if (isSuccess(pan, r, c) == 1)
        {
            printf("���� �̰���ϴ�.~~!!!!!\n");
            break;//return 0;
        }

        do
        {
            printf("���� ��ǥ�� �Է��ϼ���. (�� ��) :");
            scanf("%d %d", &r, &c);
        } while (!isValid(pan, r, c));
        pan[r][c] = 2;
        printPan(pan);
        if (isSuccess(pan, r, c))
        {
            printf("���� �̰���ϴ�.~~!!!!!\n");
            break;//return 0;
        }
    }
    return EXIT_SUCCESS;
}

void printPan(int p[N][N])
{
    int i, j;
    printf("\n   0 1 2 3 4 5 6 7 8 9101112131415161718\n");
    printf("  ----------------------------------------\n");
    for (i = 0; i < N; i++)
    {
        printf("%2d|", i);
        for (j = 0; j < N; j++)
        {

            if (p[i][j] == 1) printf("��"); //��
            else if (p[i][j] == 2) printf("��");  //��
            else printf("+ ");
        }
        printf("|\n");
    }
    printf("  ----------------------------------------\n");
}
//��踦 ����� �ʾҴ���, �̹� �� ��ǥ������ üũ
int isValid(int p[N][N], int r, int c)
{
    if (r >= 0 && r < N && c >= 0 && c < N)
    {
        if (p[r][c] == 0) return 1;
        printf("�̹� ���� �����ϴ� ��ǥ�Դϴ�. �ٽ� �Է��� �ּ���.\n");
    }
    else
    {
        printf("��ǥ�� ��踦 ������ϴ�. �ٽ� �Է��� �ּ���.\n");
    }
    return 0;
}
//������ �̰���� üũ, 1�̸� ����, 0�̸� ���

int isSuccess(int p[N][N], int sr, int sc)
{
    int dol = p[sr][sc];//���� ��ġ�� ���� ������
    for (int r = 0; r < N; r++)
    {
        for (int c = 0; c < N; c++)
        {
            for (int d = 0; d < 4; d++)
            {
                int cnt = 1;
                int nr = r + dr[d];
                int nc = c + dc[d];

                while (nr >= 0 && nr < 19 && nc >= 0 && nc < 19 && p[nr][nc] == dol)
                {
                    nr += dr[d];
                    nc += dc[d];
                    cnt++;
                }
                if (cnt == 5)
                {
                    //printf("-------------------------------------\n");
                    cnt = 1;
                    nr += (dr[d] * -1);
                    nc += (dc[d] * -1);
                    while (nr >= 0 && nr < 19 && nc >= 0 && nc < 19 && p[nr][nc] == dol)
                    {
                        nr += (dr[d] * -1);
                        nc += (dc[d] * -1);
                        cnt++;
                    }
                    printf("%d\n", cnt);
                    if (cnt == 6) return 1;
                }
            }
        }
    }
    return 0;
}













