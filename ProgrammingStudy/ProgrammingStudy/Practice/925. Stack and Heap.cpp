//#include <iostream>  
//
//using namespace std;  
//
//
//
//
//
////���� �޸� ����
//int g_i1 = 0;
//
//int second(int x)
//{
//	return 2 * x;
//}
//
//int first(int x)
//{
//	int y = 3;
//	return second(x + y);
//}
//
////���� �޸� ����
////int main()  
////{  
////	int a = 1, b;
////	b = first(a);
////	cout << b << endl;
////
////   return 0;  
////}
//
//
///*
//	//�޸� ���� �� ����
//
//	// ���� ������3 : second() , int x
//	// ���� ������2 : first(), int x, int y
//	// ���� ������1 : main(), int a, int b
//	// ������ ����  : int g_i1
//
//*/
//
//
////�� �޸� ����
//int g_i2 = 0;
//
////int main()
////{
////	int* ptr = nullptr;
////	ptr = new int[100000];
////
////	delete[] ptr;
////	ptr = nullptr;
////
////	return 0;
////}
//
//
///*
//	//�޸� ���� �� ����
//
//	// ��     ����  : sizeof(int) * 100000 Bytes �Ҵ�
//	// ���� ������1 : main(), int * ptr
//	// ������ ����  : int g_i2
//
//*/
//
//
////�� �޸� ���� 2
//int g_i3 = 0;
//
//void initArray()
//{
//	int* ptr2 = new int[1000];
//	//delete[] ptr2;
//}
//
//int main()
//{
//	initArray();
//
//	return 0;
//}
//
//
//
///*
//	//�޸� ���� �� ����
//
//	//�ڵ�� ������ delete�� �̷�������ʾ� �޸� ���� �߻�
//	// ��     ����  : sizeof(int) * 1000 Bytes �Ҵ�
//	// ���� ������2 : intiArray() , int * ptr2
//	// ���� ������1 : main()
//	// ������ ����  : int g_i3
//
//*/