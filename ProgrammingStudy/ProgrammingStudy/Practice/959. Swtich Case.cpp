//#include <iostream>
//
//using namespace std;
//
//enum class Color
//{
//	Red,
//	Green,
//	Blue,
//	Yellow,
//};
//
//
//void printColorName(Color color)
//{
//	// switch 문을 사용하여 enum 값을 출력
//	switch (static_cast<int>(color))
//	{
//	case 0:
//		cout << "Red" << endl;
//		break;
//	case 1:
//		cout << "Green" << endl;
//		break;
//	case 2:
//		cout << "Blue" << endl;
//		break;
//	case 3:
//		cout << "Yellow" << endl;
//		break;
//	default:  //케이스에 정리가 안된 값이 들어올 경우
//		cout << "Unknown color" << endl;
//		//default에는 break문이 필요없음.
//	}
//}
//
//
//int main()
//{
//	int x;
//	cin >> x;
//
//	//[주의할 점]
//	//switch 문 안에 지역변수 선언이 가능하나
//	//값을 넣는것은 case 키워드 이후에서 가능.
//	switch (x)
//	{
//		int a;
//		int y;
//		case 0:
//			int y;
//			y= 10;
//			break;
//		case 1:
//			cout << y  << endl; //case 0의 지역 안에 있는 y값에는 접근 안됨. 
//			//switch문 앞에 있는 y의 garbage값이 출력됨.
//			break;
//	}
//
//	return 0;
//}