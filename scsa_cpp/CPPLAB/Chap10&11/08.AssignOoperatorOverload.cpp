#include <iostream>

using namespace std;

class Sample {
private :
	int num1, num2;
public:
	Sample()  {cout << "생성자" << endl;}
	Sample(int a, int b) :num1(a), num2(b) { cout << "생성자 int a, b" << endl; }
	Sample(const Sample& copy) 
		:num1(copy.num1), num2(copy.num2) { cout << "복사생성자 int a, b" << endl; }
	~Sample() { cout << "소멸자" << endl; }
	Sample& operator=(const Sample& ref) {
		cout << "디펄트 대입연산자 오버로드";
		this->num1 = ref.num1;
		this->num2 = ref.num2;
		return *this;
	}
	void print() {
		cout << num1 << ", " << num2 << endl;
	}
};


int main() {
	Sample s(3,5);
	Sample s2 = s;
	Sample s3;
	s3 = s;
	s3.print();




	return 0;
}