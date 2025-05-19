//#include <iostream>
//#include <iomanip>
//
//
//using namespace std;
//
//int main()
//{
//
//	int a = 123.0; // int a = (int)123.0; // 암시적 형변환
//	int b = (int)123.0;  // 명시적 형변환
//	cout<< typeid(a).name() << endl;
//
//	float a = 1.0f;
//	double d = a; //Numeric Promotion
//
//	int i = 30000;
//	char c = i; //Numeric Conversion
//	cout << static_cast<int>(c) << endl; // 44. 127도 안나옴.(절삭됨)
//
//	double d = 0.1234586938383;
//	float f = d; //Numeric Conversion
//	cout << std::setprecision(12) << f << endl; // 0.1234586938383
//
//
//	return 0;
//}