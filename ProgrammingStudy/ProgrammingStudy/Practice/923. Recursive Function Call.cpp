//#include <iostream>  
//
//using namespace std;  
//
//void CountDown(int count)
//{
//	cout << count << endl;
//	//��������(������ ���ÿ����÷ο� ���輺 up)
//	if(count >0)
//		CountDown(count - 1);
//}
//
////�Ϲ� ��� ȣ�� vs ���� ��� ȣ��
//int factorial(int n) {
//	if (n <= 1) return 1;
//	return n * factorial(n - 1); // �� ���⼭ ��� ȣ�� �ڿ� ���� ������ ���� ����
//}
//
///*
//	factorial(3)
//	 �� 3 * factorial(2)
//		 �� 2 * factorial(1)
//			 �� 1
//	 �� 2 * 1 = 2
//	 �� 3 * 2 = 6
//	 -> ��� ȣ�� ���� �Ŀ��� �ش� ���鿡 ���������� 
//	     �߰��� �ؼ� ������������ �����ؾ���
//*/
//
//int tailFactorial(int n, int acc = 1) {
//	if (n <= 1) return acc;
//	return tailFactorial(n - 1, acc * n); // �� ������ ���� �ϰ� ���ȣ�⸸ ����
//}
//
///*
//	tailFactorial(3, 1)
//	 �� tailFactorial(2, 3)
//		 �� tailFactorial(1, 6)
//			 �� return 6
//	-> ��� ���� ����� ������ acc�� �����ؼ� �����ϹǷ�, 
//	   ��� ȣ�� �� �߰� �۾��� �ʿ� ���� 
//	�� ���� ������ ���� ���� ����ȭ ����
//
//*/
//
//
//int main()
//{
//	CountDown(5);
//
//	return 0;
//}
//
