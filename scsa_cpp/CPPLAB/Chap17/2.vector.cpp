//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
///*
//	vector 
//		�����迭���� (ũ�Ⱑ �ڵ�����)'
//		push_back, end, begin, back, front, size .....
//		push_back�� ���� ���ϴ�
//		vector push_front �����
//*/
//class Person {
//private:
//public:
//	string name;
//	int age;
//public:
//	Person(string name, int age) :name(name), age(age) {}
//	void print() {
//		cout << name << "," << age << endl;
//	}
//};
//
//int main(){
//	vector<Person*> persons;
//	persons.push_back(new Person("�Ѹ�", 7));
//	persons.push_back(new Person("�����", 8));
//	persons.push_back(new Person("��ġ", 9));
//	
//	/*for (vector<int>::size_type i = 0; i < persons.size(); i++)
//	{
//		persons[i]->print();
//	}*/
//
//	//cout << endl;
//	for (vector<Person*>::iterator itr = persons.begin() ; itr != persons.end() ; itr++)
//	{
//		(*itr)->print();
//	}
// 
//	// for_each
//	for_each(persons.begin(), persons.end(), /* �Լ�*/ [](Person* p) { p->print(); });
//
//	// ����
//	vector<Person*>::iterator itr = persons.begin();
//	for (; itr != persons.end(); itr++)
//	{
//		if ((*itr)->name == "�Ѹ�") {
//			persons.erase(itr);
//			itr = persons.begin();
//		}
//		// ũ�Ⱑ ����Ǿ��� ������ �ٽ� �ʱ�ȭ �Ѵ�
//		(*itr)->print();
//	}
//
//
//	vector<int> vec;
//	vec.push_back(1);
//	vec.push_back(3);
//	vec.push_back(5);
//	vec.push_back(7);
//
//	for (vector<int>::size_type i = 0; i < vec.size(); i++)
//	{
//		cout << vec[i] << " ";
//	}
//	cout << endl;
//	return 0;
//}