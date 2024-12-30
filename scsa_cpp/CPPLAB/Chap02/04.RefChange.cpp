//#include <iostream>
//using namespace std;
///*
//	참조형은 변수에 이름을 하나더 만드는 작업
//	함수의 파라미터타입이 참조형이면 주소변수와 같은 효과를 냅니다
//	함수의 리턴타입이 참조형이면 호출한 쪽의 변수는 참조형 일반형 다 가능하다
//	하지만 두개의 의미는 다르다
//*/
//void change(int& a, int& b) {
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//int& add(int a) {
//	a++;
//	return a;
//}
//int main() {
//	int a = 10, b = 20;
//	change(a, b);
//	cout << a << "," << b << endl;
//	int& res = add(a);
//	cout << res << endl;
//}

