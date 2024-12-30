#include <iostream>
using namespace std;

class SoSimple
{
public:

	static int simObjCnt;
	int cnt;
public:
	SoSimple()
	{
		simObjCnt++;
	}
	static void printStaticCnt() {
		cout << "static simObjCnt : " << simObjCnt << endl;
		// static function ������ static ������ static �Լ��� ����Ҽ� �ִ�
		// cout << " cnt : " << cnt << endl;
	}
};
// static member ������ �� �ʱ�ȭ�� ���־�� �Ѵ�
int SoSimple::simObjCnt = 0;

int main(void)
{

	SoSimple sim1;


	sim1.printStaticCnt();
	SoSimple::printStaticCnt();
	return 0;
}