#include <iostream>

using namespace std;


//int main()
//{
//	//tic tae toe ���� ����
//	char Board[3][3];
//
//	//������ �ʱ�ȭ
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			Board[i][j] = ' ';
//		}
//	}
//	
//	int x, y;s
//	//���� ����
//	for (int j = 0; j < 9; j++)
//	{
//		if (j % 2 == 0)
//		{
//			cout<< " X�� ����" <<endl;
//		}
//		else
//		{
//			cout << "O�� ����" << endl;
//		}
//		cin >> x >> y;
//		Board[x-1][y-1] = (j % 2 == 0) ? 'X' : 'O'; // X �Ǵ� O�� �����ǿ� ��ġ
//
//		//������ ���
//		for (int i = 0; i < 3; i++)
//		{
//			
//			cout << "===|===|===" << endl;
//			cout << Board[i][0] << " | " << Board[i][1] << " | " << Board[i][2] << endl;
//		}
//			cout << "===|===|===" << endl;
//	}
//
//
//
//	return 0;
//}