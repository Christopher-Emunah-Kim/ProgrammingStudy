//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//int main()
//{
//
//	//Relational Operator(���� ������)
//	//���� ��
//	int x, y;
//	cin >> x >> y;
//	cout << "Your input values are : " << x << " " << y << endl;
//
//	if (x == y)
//		cout << "x is equal to y" << endl;
//	if (x != y)
//		cout << "x is not equal to y" << endl;
//	if (x < y)
//		cout << "x is less than y" << endl;
//	if (x > y)
//		cout << "x is greater than y" << endl;
//	if (x <= y)
//		cout << "x is less than or equal to y" << endl;
//	if (x >= y)
//		cout << "x is greater than or equal to y" << endl;
//
//	//�Ǽ� ��
//	double d1(100 - 99.99);
//	double d2(10 - 9.99);
//	cout << "Your floating values are : " << d1 << " " << d2 << endl;
//	if (d1 == d2)
//		cout << "d1 is equal to d2" << endl;
//	else
//	{
//		cout << "d1 is not equal to d2" << endl;
//		if (d1 < d2)
//			cout << "d1 is less than d2" << endl;
//		else
//			cout << "d1 is greater than d2" << endl;
//	}
//	cout << abs(d1 - d2) << endl;
//
//	//���е��� ������ ��
//	const double epsilon = 1e-16;
//
//	if (abs(d1 - d2) < epsilon)
//		cout << "d1 is approximately equal to d2" << endl;
//	else
//		cout << "Not Equal" << endl;
//
//
//	return 0;
//}