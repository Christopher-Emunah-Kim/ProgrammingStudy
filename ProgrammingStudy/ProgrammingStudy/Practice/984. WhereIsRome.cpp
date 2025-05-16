#include <string>
#include <iostream>


using namespace std;


int FindStr(string str, string subStr)
{
	int objectIdx = str.find(subStr);
	return objectIdx;
}





//int main()
//{
//	string str = "When in Rome, do as the Romans";
//	string subStr = "Rome";
//	int objectIdx = FindStr(str, subStr);
//	if (objectIdx != string::npos)
//	{
//		cout << "Found at index: " << objectIdx << endl;
//	}
//	else
//	{
//		cout << "Not found" << endl;
//	}
//
//	return 0;
//}