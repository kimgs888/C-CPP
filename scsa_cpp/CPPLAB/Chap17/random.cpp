//#include <iostream>
//
//using namespace std;
//
//unsigned int randomGenerator()
//{
//	static unsigned int seed = 5647; // ���Ƿ� ���õ� seed�� '5647'
//	seed = 8235729 * seed + 2396403;  // �Ϻη� overflow�� ����Ų��.
//
//	return seed % 10; // [0, 9] ������ ���� ��ȯ�ϰ� �ȴ�.
//}
//
//int main()
//{
//	for (int count = 1; count <= 100; ++count) // ������ 100�� �����Ѵ�.
//	{
//		cout << randomGenerator() << "\t";  // ���� ���� �� ���
//		if (count % 5 == 0) cout << endl;   // 5������ ����
//	}
//}
