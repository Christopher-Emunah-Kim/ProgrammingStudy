#include <iostream>

using namespace std;



int main()
{
	int x = 5;
	double d = 123.0;
	cout << x << endl;
	
	//de-reference operator(������ * ������)
	int *ptr_x = &x, *ptr_y = &x; //������ �ּҸ� ������ ������ ����.
	//��� Ÿ���� ���������� �˾ƾ� dereferencing�� �Ҷ� �޸𸮿��� ������ ����Ʈ ������ �� �� ����.
	double *ptr_d = &d;

	cout << &x << endl; // & ������(address-of operator)
	cout<< ptr_x << endl; // & �����ڿ� ������ �޸� �ּ� ��Ī.
	cout << *ptr_x << endl; // �ּҿ��� �� ��������
	cout << ptr_d << endl;
	cout << *ptr_d << endl;

	return 0;
}