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
//		if (std::cin.fail()) // �߸��� �Է��� ���
//		{
//			std::cin.clear(); // ���� �÷��� ����
//			std::cin.ignore(32767, '\n'); // �Է� ���� ����
//			cout << "Invalid Number" << endl;
//		}
//		else // �ùٸ� ���� �Է� ��
//		{
//			std::cin.ignore(32767, '\n'); // ������ �Է� ���� ����
//			return x; // ���� ��ȯ�ϰ� �Լ� ����
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