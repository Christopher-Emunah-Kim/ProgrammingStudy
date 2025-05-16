#include <iostream>

using namespace std;

//int main()
//{
//	int n;
//	srand(time(NULL)); // 난수 생성기 초기화
//	n = rand() & 100 + 1;
//	int i = -1;
//	int count = 0;
//	do
//	{
//		cout << "정답을 추측하여 보시오: " << endl;
//		cin >> i;
//		if (i > n)
//		{
//			cout << "정답은 더 작은 수입니다." << endl;
//			count++;	
//		}
//		if (i < n)
//		{
//			cout << "정답은 더 큰 수입니다." << endl;
//			count++;
//		}s
//	}
//	while(i != n);
//	cout << "정답입니다! 시도횟수 : " << count << endl;
//
//	return 0;
//}