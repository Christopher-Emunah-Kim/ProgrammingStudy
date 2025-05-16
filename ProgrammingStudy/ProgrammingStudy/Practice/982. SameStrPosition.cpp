#include <string>
#include <iostream>

using namespace std;

int SameStrPosition(string str1, string str2)
{
	int i = 0;
	int j = 0;
	int count = 0;
	while (i < str1.length() && j < str2.length())
	{
		if (str1[i] == str2[j])
		{
			count++;
			i++;
			j++;
		}
		else
		{
			i++;
		}
	}
	return count;
}


//
//int main()
//{
//    string str1, str2;
//
//	cout << "Enter first string: ";
//	cin >> str1;
//	cout << "Enter second string: ";
//	cin >> str2;
//
//	int result = SameStrPosition(str1, str2);
//	cout << "Number of same characters in the same position: " << result << endl;
//
//
//	return 0;
//
//}