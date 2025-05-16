#include <iostream>

using namespace std;


void printf(int a)
{
	cout << "int: " << a << endl;
}

void printf(double d)
{
	cout << "double: " << d << endl;
}

void printf(string s)
{
	cout << "string: " << s << endl;
}



//
//int main()
//{
//	int a = 10;
//	double d = 3.14;
//	string s = "Hello, World!";
//	printf(a); // int: 10
//	printf(d); // double: 3.14
//	printf(s); // string: Hello, World!
//	// printf(10.0); // ambiguous call error
//
//	return 0;
//}