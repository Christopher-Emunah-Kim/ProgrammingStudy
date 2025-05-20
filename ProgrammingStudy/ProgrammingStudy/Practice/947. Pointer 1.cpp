//#include <iostream>
//#include <typeinfo>
//
//using namespace std;
//
//
//struct Somthing
//{
//	int smthing;
//	double smthing2;
//};
//
//int main()
//{
//	int x = 5;
//	double d = 123.0;
//	cout << x << endl;
//	
//	//de-reference operator(포인터 * 연산자)
//	int *ptr_x = &x, *ptr_y = &x; //변수의 주소를 포인터 변수에 넣음.
//	//어느 타입의 포인터인지 알아야 dereferencing을 할때 메모리에서 가져올 바이트 단위를 알 수 있음.
//	double *ptr_d = &d;
//
//	cout << &x << endl; // & 연산자(address-of operator)
//	cout<< ptr_x << endl; // & 연산자와 동일한 메모리 주소 지칭.
//	cout << *ptr_x << endl; // 주소에서 값 가져오기
//	cout << ptr_d << endl;
//	cout << *ptr_d << endl;
//
//
//	cout << typeid(ptr_x).name() << endl; //int* __ptr64 : 64비트 주소 공간을 가리키는 int 포인터(8바이트)
//	cout << typeid(ptr_d).name() << endl; // double* __ptr64
//
//	cout << sizeof(x) << endl; // 4byte
//	cout << sizeof(d) << endl; // 8byte
//	cout << sizeof(&x) << " " << sizeof(ptr_x) << endl; //64비트 기준으로 8바이트. 32비트 기준으로 4바이트.
//	cout << sizeof(&d) << " " << sizeof(ptr_d) << endl;
//
//	//구조체의 포인터는?
//	Somthing ss;
//	Somthing *ptr_s;
//
//	cout << sizeof(ss) << endl; //16 byte
//	cout << sizeof(ptr_s) << endl; //8 byte
//
//	return 0;
//}