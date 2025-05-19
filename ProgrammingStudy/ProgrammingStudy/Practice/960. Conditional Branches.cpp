//#include <iostream>
//#include <cstdint>
//#include <vector>
//
//using namespace std;
//
//
//
//int main()
//{
//	// 조건문 if 
//	// Chaining으로 if문을 연결할 수 있다.
//	int x;
//	cin >> x;
//
//	if(x>10) 
//		cout << "x is greater than 10" << endl;
//	else if (x < 10)
//		cout << "x is less than 10" << endl;
//	else
//		cout << "x is equal to 10" << endl;
//
//	// if문 내부도 지역이다
//	// 지역변수의 스코프와 Duration은 if문 내부에서만 유지.
//	if (1)
//	    int x = 1;
//	else
//		int x = 2;
//	cout << x << endl; 
//	// 지역 변수는 해제됐으므로 상단의 x가  유지.
//
//	// 논리연산자를 사용한 조건문 설정
//	int a, b;
//	cin >> a >> b;
//	if (a > 0 && b > 0)
//		cout << "Both are positive" << endl;
//	else if (a < 0 || b < 0)
//		cout << "At least one is negative" << endl;
//	else
//		cout << "Both are zero" << endl;
//
//	return 0;
//}