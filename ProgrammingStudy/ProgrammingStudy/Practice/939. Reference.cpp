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
//	//�ּҸ� ����.
//	cout << &value << endl; //00000011DE2FFA84
//	cout << &ref << endl;   //00000011DE2FFA84 //ref�� ������ ���� �޸� ���.
//	cout << ptr << endl;    //00000011DE2FFA84
//	cout << &ptr << endl;   //00000011DE2FFAC8 
//	//-> ������ ��ü�� �ٸ� �޸𸮸� �Ҵ�޾� �ڽ��� �ּҷμ� ���.
//	
//	//const����� ���� �����Ϸ��� const & Ÿ���� ����ؾ�..
//	const int y = 8;
//	const int& ref2 = y;
//
//	//ref�� ������ �����͸� �ٲ����
//	int n = 5;
//	cout<<n<<endl;
//	doSomething(n);
//	cout << n << endl;
//
//	//����ü�� ���� ���������� ����
//	Other ot;
//	int& v1 = ot.st.v1;
//	v1 = 1;
//
//	//�����Ϳ� ref�� ����� ������.
//	//���۷����� ���������δ� �����ͷ� ����.
//	int value3 = 5;
//	int * const ptr3 = &value3;
//	int & ref3 = value3;
//	*ptr3 = 10;
//	ref3 = 10;
//
//		
//	return 0;
//}