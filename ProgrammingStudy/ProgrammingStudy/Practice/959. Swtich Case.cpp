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
//	// switch ���� ����Ͽ� enum ���� ���
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
//	default:  //���̽��� ������ �ȵ� ���� ���� ���
//		cout << "Unknown color" << endl;
//		//default���� break���� �ʿ����.
//	}
//}
//
//
//int main()
//{
//	int x;
//	cin >> x;
//
//	//[������ ��]
//	//switch �� �ȿ� �������� ������ �����ϳ�
//	//���� �ִ°��� case Ű���� ���Ŀ��� ����.
//	switch (x)
//	{
//		int a;
//		int y;
//		case 0:
//			int y;
//			y= 10;
//			break;
//		case 1:
//			cout << y  << endl; //case 0�� ���� �ȿ� �ִ� y������ ���� �ȵ�. 
//			//switch�� �տ� �ִ� y�� garbage���� ��µ�.
//			break;
//	}
//
//	return 0;
//}