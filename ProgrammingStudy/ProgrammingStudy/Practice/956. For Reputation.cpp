//#include <iostream>
//
//using namespace std;
//
//
//int main()
//{
//	/* 
//		for (�ʱ��; ���ǽ�; ������) {
//		// ������ ���� ���� �ݺ� ����� �ڵ�
//	*/
//
//	//for�� ����
//	//�ѹ��� �ݺ��� Iteration�̶� ��.
//	for(int count = 0; count < 10; ++count)
//		cout << count << endl;
//
//	//for�� -1 (�ʱ�� �ܺμ���)
//	int count2 = 0;
//	for (    ; count2 < 10; ++count2)
//		cout << count2 << endl;
//
//	//for�� -2 (���� ����)
//	for(int count3 = 0; true ; ++count3)
//		cout << count3 << endl;
//
//	//for�� - 3 (���� ǥ����)
//	for (int i = 0, j = 0; i < 10; ++i, --j)
//	{
//		cout << i << " " << j << endl;
//	}
//
//	//for�� - 4 (���� ǥ���� + ���� ���ǽ�)
//	int i = 0, j= 0;
//	for (; (i + j) < 10; ++i, j += 2)
//	{
//		cout << i << " " << j << endl;
//	}
//
//	//for�� - 5(���� for��)
//	for (int k = 0; k < 9; ++k)
//	{
//		for (int p = 0; p < 9; ++p)
//		{
//			cout << k << " " << p << endl;
//		}
//	}
//
//	//(����) �����÷ο� ����
//	for (unsigned int u = 9; u >= 0; --u)
//	{
//		cout << u << endl;
//	}
//
//	return 0;
//}