//#include <iostream>
//
//using namespace std;
//
//int getInt()
//{
//	while (true)
//	{
//		cout << "Enter an integer number : ";
//		int x;
//		cin >> x;
//
//		if (std::cin.fail()) // 잘못된 입력일 경우
//		{
//			std::cin.clear(); // 에러 플래그 제거
//			std::cin.ignore(32767, '\n'); // 입력 버퍼 비우기
//			cout << "Invalid Number" << endl;
//		}
//		else // 올바른 정수 입력 시
//		{
//			std::cin.ignore(32767, '\n'); // 나머지 입력 버퍼 비우기
//			return x; // 값을 반환하고 함수 종료
//		}
//	}
//}
//
//int getOperator()
//{
//	while (true)
//	{
//		cout << "Enter an operator ( +, - ) : ";
//		char op;
//		cin >> op;
//		std::cin.ignore(32767, '\n');
//
//		if(op == '+' || op == '-') return op;
//		else cout << "Invalid operator" << endl;
//	}
//}
//
//void printResult(int x, char op, int y)
//{
//	if(op == '+') cout << x+y << endl;
//	else if(op == '-') cout << x-y << endl;
//	else cout << "Invalid operator" << endl;
//}
//
//
//int main()
//{
//	int  x  = getInt();
//	char op = getOperator();
//	int  y  = getInt();
//
//	
//
//	return 0;
//}