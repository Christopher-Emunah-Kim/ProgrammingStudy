//#include <iostream>  
//#include <array>
//#include <tuple>
//
//using namespace std;  
//
////Return by Struct
//struct S
//{
//	int a,b,c,d;
//};
//
//S getStruct()
//{
//	S my_s{ 1,2,3,4 };
//}
//
////Return by tuple
//std::tuple<int, double> getTuple()
//{
//	int a = 10;
//	double d = 3.14;
//	return std::make_tuple(a, d);
//}
//
//
//int main()  
//{  
//	//Return by Struct
//	//구현 오버헤드가 큼
//	S my_s = getStruct();
//	my_s.b;
//
//	//Return by tuple
//	std::tuple<int, double> my_tp = getTuple();
//	int a = std::get<0>(my_tp); //a
//	double d = std::get<1>(my_tp); //b
//
//   return 0;  
//}