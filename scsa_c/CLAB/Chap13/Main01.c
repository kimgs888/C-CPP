#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
* ������ �����ֱ�
* 
* �������� : block "{}" �ȿ��� ����Ǿ��� ����
*		�Ҹ���� : block ����Ǹ� free �ȴ�
*		Ȱ������ : ����Ǿ��� block �ȿ����� ���Ǿ�����
* �������� : �Լ��� �ۿ��� ����Ǿ����� ����
*		�Ҹ���� : ���α׷��� ����Ǹ� free �ȴ�
*		Ȱ������ : ���α׷� ��ü�������� ���Ǿ� ����
* 
* ������������ : �ڽ��� ����� �Լ��� ������ ������� �ȴ� ����
* ������������ : �ڽ��� ����� C ���Ͼȿ����� �������� ���Ǿ����� ����
* 
* �������ͺ��� : �������Ϳ����� ����ɼ��� �ִ� ����
* 
*/
// ��������
int b = 20;
// ������������
static int sg = 30;
void func4() {
	register int i;
	// �������� ������ �����ͺ����� ����ų�� ����
	//int* p = &i;
	 
	auto int sum = 0;
	for (i = 0;i < 100000;i++) {
		sum += i;
	}
	printf("%d\n", sum);
}
int*  func3() {
	static int a = 10;
	int* pa = &a;
	return pa;
}
void func2() {
	static int res = 10;
	res++;
	printf("%d\n", res);
}
void func1(int a) {
	printf("%d %d\n", a,b);
}
int main01() {
	// ��������
	auto int a = 10;
	//printf("%d\n", a);
	//func1(a);
	/*func2();
	func2();
	func2();*/
	int* res = func3();
	printf("%d\n", *res);
	printf("%d\n", sg);
	return 0;
}