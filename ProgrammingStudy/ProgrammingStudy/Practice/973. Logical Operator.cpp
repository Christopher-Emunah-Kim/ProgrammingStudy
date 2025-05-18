//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//int main()
//{
//	// logical operator	
//	//logical NOT
//	bool x = true;
//	cout << !x << endl;
//
//	//logical AND
//	bool y = false;
//	cout << (x && y) << endl;
//
//	bool hit = true;
//	int health = 10;
//	if (hit == true && health < 20)
//	{
//		cout << "die" << endl;
//	}
//	else
//		health -= 20;
//
//	//logical OR
//	cout << (x || y) << endl;
//
//	//De Morgan's Law
//	bool a = true;
//	bool b = false;
//	cout << !(a && b) << endl;
//	cout << (!a || !b) << endl;
//
//	//logical XOR
//	// XOR이 C++ 연산자는 아님.
//
//	bool c = true;
//	bool d = false;
//	cout << (c ^ d) << endl;
//
//	//QUIZ
//	//(true && true) || false					-> TRUE
//	//(false && true) || true					-> TRUE
//	//(false && true) || false || true			-> TRUE
//	//(14 > 13 || 2 > 1) && (9 > 1)		-> TRUE
//	//!(2314123 > 2 || 123123 > 2387)	-> FALSE
//
//	return 0;
//}