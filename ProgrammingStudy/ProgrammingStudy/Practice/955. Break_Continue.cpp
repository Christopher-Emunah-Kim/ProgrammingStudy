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
//		goto tryAgain; //goto문
//	}	
//	cout << sqrt(x) << endl;
//
//	goto skip; //초기화 부분을 건너뛰기때문에 오류 발생.
//
//	int x = 5;
//skip:
//    x += 3;
//
//	return 0;
//}