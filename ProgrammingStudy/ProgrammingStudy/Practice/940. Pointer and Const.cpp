//#include <iostream>
//
//using namespace std;
//
//
//
//int main()
//{
//	int value = 5;
//	int * ptr = &value;
//	*ptr = 6;
//	cout << *ptr << endl;
//
//	//// const + ������ + identifier /////
//	//value ���� ���������� ���ٲٳ� ���� �аų� �ּҴ� ������ �� ����.
//	const int value2 = 5;
//	const int * ptr2 = &value2;
//	//*ptr2 = 6; (����!)
//	cout << *ptr2 << endl;
//
//	//�����Ͱ� ���� ���� ���ٲܻ�, ���������� ������ ����
//	int value3 = 5;
//	const int* ptr3 = &value3;
//	//*ptr3 = 6; (����!)
//	value3 = 6;
//	cout << *ptr3 << endl;
//
//	//�����͸� ���� �������ϴ°� ������,
//	//�����Ͱ� ����Ű�� ���� �ٲٰų�, �ּҿ� ���� �д°��� �� ����.
//	int value4 = 5;
//	const int* ptr4 = &value4;
//	int value5 = 6;
//	ptr4 = &value5; //���ο� �ּҷ� ����
//	//*ptr4 = 7; (����)! ������ �����͸� ���� ������ NO.
//
//
//	//// ������ + const + Identifier ////
//	//�����Ͱ� ����Ų ���� ���ȭ. ���� �ٲ� �� ����.
//	int value6 = 5;
//	int *const ptr6 = &value6;
//	*ptr6 = 10; //�� ���� ����.
//	int value7 = 6;
//	//ptr6 = &value7; (����!) �� �����̾ȵ�.
//	cout << *ptr6 << endl; //������ ����
//
//
//	//// const + ������ + const + Identifier
//	//�ƹ��͵� �ȵ�.
//	int value8 = 5;
//	const int* const ptr8 = &value8; //�ʱ�ȭ �ʼ�
//
//
//	//////////////////////////////////////////////////////////////////////////
//	// ����
//	int value00 = 5;
//	const int *ptr11			= &value00;
//	int* const ptr12			= &value00;
//	const int* const ptr13		= &value00;
//
//
//
//
//	return 0;
//}