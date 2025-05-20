//#include <iostream>
//
//using namespace std;
//
//void doSomething(const int& x)
//{
//	cout << x << endl;
//}
//
//
//int main()
//{
//	int x = 5;
//	int &ref_x = x;
//	const int &ref_2 = ref_x;
//	
//	// int& ref_x = 5; (오류!) 참조에 대한 초기화가 되지않음.
//
//	//const + reference : 
//	const int & ref_x = 3+4; //(가능) 
//	cout << ref_x << endl;
//	cout << &ref_x << endl;
//
//	int a =1;
//	doSomething(a);
//	doSomething(1);
//	doSomething(a+3);
//	doSomething(3*4);
//
//	return 0;
//}