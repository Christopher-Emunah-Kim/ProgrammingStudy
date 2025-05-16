#include <iostream>

using namespace std;


//int main()
//{
//	//tic tae toe 게임 제작
//	char Board[3][3];
//
//	//게임판 초기화
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			Board[i][j] = ' ';
//		}
//	}
//	
//	int x, y;s
//	//게임 시작
//	for (int j = 0; j < 9; j++)
//	{
//		if (j % 2 == 0)
//		{
//			cout<< " X의 차례" <<endl;
//		}
//		else
//		{
//			cout << "O의 차례" << endl;
//		}
//		cin >> x >> y;
//		Board[x-1][y-1] = (j % 2 == 0) ? 'X' : 'O'; // X 또는 O를 게임판에 배치
//
//		//게임판 출력
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