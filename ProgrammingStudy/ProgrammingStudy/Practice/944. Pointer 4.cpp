//#include <iostream>
//
//using namespace std;
//
//
//
//int main()
//{
//	//�������� �ּҿ���(Array Indexing)
//	int value = 7;
//	int *vptr = &value;
//
//	cout << uintptr_t(vptr -1) << endl; //958098504816
//	cout << uintptr_t(vptr) << endl; //958098504820
//	cout << uintptr_t(vptr +1) << endl; //958098504824
//	cout << uintptr_t(vptr +2) << endl; //958098504828
//	//integerŸ���̴ϱ� �޸� ���� ������ 4�� �̵�.
//	//������ Ÿ�Կ� data type�� ���� ���� 
//	// : ������ Ÿ���� ���� �޸� �ּҿ��� �о���� ���� ���ϱ� ����.
//
//	//int Ÿ�� �迭�� ���� �ּ� ����
//	int array[] = {9, 6, 7, 2,3, 2};
//
//	int *ptr = array;
//
//	for (int i = 0; i < 5; ++i)
//	{
//		cout << *(ptr+i) << (uintptr_t)(ptr+i) << endl;
//	}
//
//	//���ڿ��� �ּҿ���
//	char name[] = "Jack Jack";
//
//	const int n_name = sizeof(name) / sizeof(char);
//
//	char *ptr = name;
//
//	for (int i = 0; i < n_name; ++i)
//	{
//		cout << *(ptr + i);
//	}
//
//	return 0;
//}