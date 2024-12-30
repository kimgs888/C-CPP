//#include <iostream>
//
//using namespace std;
//
//unsigned int randomGenerator()
//{
//	static unsigned int seed = 5647; // 임의로 선택된 seed값 '5647'
//	seed = 8235729 * seed + 2396403;  // 일부러 overflow를 일으킨다.
//
//	return seed % 10; // [0, 9] 사이의 값을 반환하게 된다.
//}
//
//int main()
//{
//	for (int count = 1; count <= 100; ++count) // 난수를 100개 생성한다.
//	{
//		cout << randomGenerator() << "\t";  // 난수 생성 후 출력
//		if (count % 5 == 0) cout << endl;   // 5개마다 개행
//	}
//}
