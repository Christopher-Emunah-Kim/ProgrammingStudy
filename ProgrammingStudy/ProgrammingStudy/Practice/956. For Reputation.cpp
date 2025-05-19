//#include <iostream>
//
//using namespace std;
//
//
//int main()
//{
//	/* 
//		for (초기식; 조건식; 증감식) {
//		// 조건이 참일 동안 반복 실행될 코드
//	*/
//
//	//for문 기초
//	//한번의 반복을 Iteration이라 함.
//	for(int count = 0; count < 10; ++count)
//		cout << count << endl;
//
//	//for문 -1 (초기식 외부선언)
//	int count2 = 0;
//	for (    ; count2 < 10; ++count2)
//		cout << count2 << endl;
//
//	//for문 -2 (무한 루프)
//	for(int count3 = 0; true ; ++count3)
//		cout << count3 << endl;
//
//	//for문 - 3 (다중 표현식)
//	for (int i = 0, j = 0; i < 10; ++i, --j)
//	{
//		cout << i << " " << j << endl;
//	}
//
//	//for문 - 4 (다중 표현식 + 복합 조건식)
//	int i = 0, j= 0;
//	for (; (i + j) < 10; ++i, j += 2)
//	{
//		cout << i << " " << j << endl;
//	}
//
//	//for문 - 5(이중 for문)
//	for (int k = 0; k < 9; ++k)
//	{
//		for (int p = 0; p < 9; ++p)
//		{
//			cout << k << " " << p << endl;
//		}
//	}
//
//	//(에러) 오버플로우 문제
//	for (unsigned int u = 9; u >= 0; --u)
//	{
//		cout << u << endl;
//	}
//
//	return 0;
//}