//#include <iostream>
//
//using namespace std;
//
//
//int main()
//{
//	double x;
//
//tryAgain : //label
//	cout << "Enter a non-negative number" << endl;
//	cin >> x;
//
//	if(x < 0.0)
//	{
//		cout << "Error: negative number" << endl;
//		goto tryAgain; //goto��
//	}	
//	cout << sqrt(x) << endl;
//
//	goto skip; //�ʱ�ȭ �κ��� �ǳʶٱ⶧���� ���� �߻�.
//
//	int x = 5;
//skip:
//    x += 3;
//
//	return 0;
//}