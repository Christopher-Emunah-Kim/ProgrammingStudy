//#include <iostream>
//#include <stddef.h> //null_ptr_t Ÿ���� ���� ���ִ� ���
//
//using namespace std;
//
//void doSomething(double* ptr)
//{
//	if (ptr != nullptr)
//	{
//		//do something useful
//		std::cout << *ptr << std::endl;
//
//		cout << "address of pointer variable in doSomething() " << &ptr << endl; //00000028173DF970
//	}
//	else
//	{
//		//do not anything.
//		std::cout << "Null ptr" << endl;
//	}
//}
//
//
//int main()
//{
//	double *ptr = nullptr; //modern c++
//	//double *ptr{nullptr}; //Uniform Initialization
//
//	doSomething(ptr); //Null ptr
//	doSomething(nullptr); //Null ptr
//
//	double d = 123.4;
//
//	doSomething(&d); //123.4
//
//	ptr = &d;
//
//	doSomething(ptr); //123.4
//
//	cout << "address of pointer variable in main() " << &ptr << endl; //0000000922AFF928
//	//�����͵� �ᱹ �޸��� �ּҰ��̱� ������ ���ڷ� �����Ǵ� �����͵� �ٸ� �ּҸ� ����Ѵ�.
//
//
//	//nullptr ���ͷ� Ÿ��.
//	std::nullptr_t nptr; 
//	
//
//	return 0;
//}