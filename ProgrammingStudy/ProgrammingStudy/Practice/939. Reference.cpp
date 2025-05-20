//#include <iostream>
//
//using namespace std;
//
//void doSomething(int& n)
//{
//	n = 10;
//	cout << "Do Something" << n << endl;
//}
//
//struct Somthing
//{
//	int v1;
//	float v2;
//};
//
//struct Other
//{
//	Somthing st;
//};
//
//int main()
//{
//	int value = 5;
//	int &ref = value;
//	cout << ref << endl;
//	ref = 10;
//	cout << value << " " << ref << endl;
//
//	int * ptr = nullptr;
//	ptr = &value;
//
//	//주소를 찍어보자.
//	cout << &value << endl; //00000011DE2FFA84
//	cout << &ref << endl;   //00000011DE2FFA84 //ref는 원본과 같은 메모리 사용.
//	cout << ptr << endl;    //00000011DE2FFA84
//	cout << &ptr << endl;   //00000011DE2FFAC8 
//	//-> 포인터 자체는 다른 메모리를 할당받아 자신의 주소로서 사용.
//	
//	//const상수의 값을 참조하려면 const & 타입을 사용해야..
//	const int y = 8;
//	const int& ref2 = y;
//
//	//ref는 원본의 데이터를 바꿔버림
//	int n = 5;
//	cout<<n<<endl;
//	doSomething(n);
//	cout << n << endl;
//
//	//구조체에 대한 참조에서도 유리
//	Other ot;
//	int& v1 = ot.st.v1;
//	v1 = 1;
//
//	//포인터와 ref의 기능은 동일함.
//	//레퍼런스도 내부적으로는 포인터로 구현.
//	int value3 = 5;
//	int * const ptr3 = &value3;
//	int & ref3 = value3;
//	*ptr3 = 10;
//	ref3 = 10;
//
//		
//	return 0;
//}