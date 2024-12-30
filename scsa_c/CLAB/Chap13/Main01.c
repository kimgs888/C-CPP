#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
* 변수의 생명주기
* 
* 지역변수 : block "{}" 안에서 선언되어지 변수
*		소멸시점 : block 종료되면 free 된다
*		활성영역 : 선언되어진 block 안에서만 사용되어진다
* 전역변수 : 함수블럭 밖에서 선언되어진는 변수
*		소멸시점 : 프로그램이 종료되면 free 된다
*		활성영역 : 프로그램 전체영역에서 사용되어 진다
* 
* 정적지역변수 : 자신이 선언된 함수가 끝나도 사라지지 안는 변수
* 정적전역변수 : 자신이 선언된 C 파일안에서만 전역으로 사용되어지는 변수
* 
* 레지스터변수 : 레지스터영역에 선언될수도 있는 변수
* 
*/
// 전역변수
int b = 20;
// 정적전역변수
static int sg = 30;
void func4() {
	register int i;
	// 레지스터 변수는 포인터변수로 가르킬수 없다
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
	// 지역변수
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