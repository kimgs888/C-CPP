//#include <iostream>
//using namespace std;
//
//class Girl;
//
//class Boy {
//private :
//	int height;
//	friend class Girl;
//public:
//	Boy(int height) ;
//
//};
//
//class Girl {
//private :
//	int tel;
//public:
//	void myBoyFriendInfo(Boy& boy);
//};
//
//Boy::Boy(int height) : height(height) {};
//
//void Girl::myBoyFriendInfo(Boy& boy) {
//	cout << "내친구 키는 : "<< boy.height << endl;
//}
//
//int main() {
//	Boy b(169);
//	Girl g;
//	g.myBoyFriendInfo(b);
//	return 0;
//}
//
