#include <iostream>  

using namespace std;  

int func()
{
	return 5;
}

int goo()
{
	return 10;
}

int main()  
{  
	cout << func << endl; //00007FF6B96844B0 �Լ����� �ּҰ� ����.

	//Function Pointer
	int (*fcnptr) () = func; //�Ķ������ ���µ� ��ġ�ؾ���.
	//�ʱ�ȭ�� �Լ��� �̸��� ����.

	//�Լ������͸� ���� �Լ� ȣ��
	cout << fcnptr() << endl; //��°� : 5

	//�ٸ� �Լ��ּҸ� ����
	fcnptr = goo; 

	//�Լ������͸� ���� �Լ� ȣ��
	cout << fcnptr() << endl; //��°� :10




   return 0;  
}