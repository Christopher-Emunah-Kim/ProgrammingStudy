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
//	//de-reference operator(������ * ������)
//	int *ptr_x = &x, *ptr_y = &x; //������ �ּҸ� ������ ������ ����.
//	//��� Ÿ���� ���������� �˾ƾ� dereferencing�� �Ҷ� �޸𸮿��� ������ ����Ʈ ������ �� �� ����.
//	double *ptr_d = &d;
//
//	cout << &x << endl; // & ������(address-of operator)
//	cout<< ptr_x << endl; // & �����ڿ� ������ �޸� �ּ� ��Ī.
//	cout << *ptr_x << endl; // �ּҿ��� �� ��������
//	cout << ptr_d << endl;
//	cout << *ptr_d << endl;
//
//
//	cout << typeid(ptr_x).name() << endl; //int* __ptr64 : 64��Ʈ �ּ� ������ ����Ű�� int ������(8����Ʈ)
//	cout << typeid(ptr_d).name() << endl; // double* __ptr64
//
//	cout << sizeof(x) << endl; // 4byte
//	cout << sizeof(d) << endl; // 8byte
//	cout << sizeof(&x) << " " << sizeof(ptr_x) << endl; //64��Ʈ �������� 8����Ʈ. 32��Ʈ �������� 4����Ʈ.
//	cout << sizeof(&d) << " " << sizeof(ptr_d) << endl;
//
//	//����ü�� �����ʹ�?
//	Somthing ss;
//	Somthing *ptr_s;
//
//	cout << sizeof(ss) << endl; //16 byte
//	cout << sizeof(ptr_s) << endl; //8 byte
//
//	return 0;
//}