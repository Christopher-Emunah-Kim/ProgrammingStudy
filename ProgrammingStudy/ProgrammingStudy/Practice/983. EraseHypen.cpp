#include <string>
#include <iostream>

using namespace std;

string eraseHyphen(string str)
{
	string result;
	for (char& ch : str)
	{
		if (ch != '-')
		{
			result += ch;
		}
	}
	return result;
}
//
//int main()
//{
//	string input;
//	cout << "Enter a string with hyphens: ";
//	getline(cin, input);
//	string output = eraseHyphen(input);
//	cout << "String without hyphens: " << output << endl;
//
//	return 0;
//}