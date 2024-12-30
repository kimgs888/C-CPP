#include <iostream>


//static(c++) : ��ġ : �������� : �����.c ���Ͼȿ����� ��밡���ϴ�
//�������� : �Լ��� ������ ������ ��������ȴ´�
//�ɹ����� : ��ü�Ǻ����� �ƴ϶� Ŭ������ ������ �ȴ�
//1. ��ü�� �������� �Ȱ� ������ ����� �����ϴ�
//2. ��� ��ü�� �������� ��Ȱ�� �ϱ�ȴ�
//
//�ɹ��Լ� : ��ü�� �������� �Ȱ� �Լ��� ����� �����ϴ�

using namespace std;

class SoSimple
{
private:
	
public:
	static int simObjCnt;
	SoSimple()
	{
		simObjCnt++;
		cout << simObjCnt << "��° SoSimple ��ü" << endl;
	}
};
int SoSimple::simObjCnt = 0;

class SoComplex
{
private:
	static int cmxObjCnt;
public:
	SoComplex()
	{
		cmxObjCnt++;
		cout << cmxObjCnt << "��° SoComplex ��ü" << endl;
	}
	SoComplex(SoComplex& copy)
	{
		cmxObjCnt++;
		cout << cmxObjCnt << "��° SoComplex ��ü" << endl;
	}
};

int SoComplex::cmxObjCnt = 0;

int main(void)
{
	SoSimple sim1;
	SoSimple sim2;

	SoComplex cmx1;
	SoComplex cmx2 = cmx1;
	SoComplex();
	// static �� �ܺο��� �����Ϸ��� public ���� �����Ͽ��� �Ѵ�
	 cout << SoSimple::simObjCnt << endl;
	return 0;
}