//#include <iostream>
//
//
//using namespace std;
//
//int g_x; //external linakage
//
//static int g_y; //internal linkage
//
////const int g_z; //X. 초기화 반드시해야함
//
//extern int g_z; //external linkage
//
//extern const int g_w; //O. 다른곳에서 반드시 한번은 초기화
//
//int g_p(1); //external linkage
//
//static int g_q(2); //internal linkage(정적 전역 변수)
//
//const int g_r(3); // 상수(파일 내에서만 사용가능한 상수)
//
//extern int g_s(1); //external linkage(다른곳에서 초기화x)
//
//extern const int g_t(1); //external linkage(다른곳에서도 쓸수있는 상수)
//
//
//
//int main()
//{
//	int i = 10;
//
//
//	return 0;
//}