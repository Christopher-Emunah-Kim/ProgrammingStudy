#include <iostream>

using namespace std;



int main()
{
	//char *name = "Jack Jack"; //����. ���� ���ڿ��� ��Ƶ� ���� ���.
	const char * name = "Jack Jack"; //����. const char*�� ���� ���ڿ��� �ɺ��� ����� ����.
	const char * name2 = "Jack Jack";

	cout << (uintptr_t)name << endl; //140698234121152
	cout << (uintptr_t)name2 << endl; //140698234121152
	//2���� �ּҰ� �����ϰ� ��µ�. �����Ϸ��� �ش� ���ڿ��� �������ϰ� �ֱ� ����.

	const char * name3 = "Jack Jack 2222";
	cout << (uintptr_t)name3 << endl; //140697313340464.
	//���ڿ� ������ �޶��� ���� ����� ���



	return 0;
}