//#include <iostream>
//#include <bitset> //이진수 변환을 위한 헤더파일
//
//
//using namespace std;
//
//int main()
//{
//	const unsigned char opt0 = 1 << 0;
//	const unsigned char opt1 = 1 << 1;
//	const unsigned char opt2 = 1 << 2;
//	const unsigned char opt3 = 1 << 3;
//	const unsigned char opt4 = 1 << 4;
//	const unsigned char opt5 = 1 << 5;
//	const unsigned char opt6 = 1 << 6;
//	const unsigned char opt7 = 1 << 7;
//
//
//	//cout << "opt0 : " << bitset<8>(opt0) << endl;
//	//cout << "opt1 : " << bitset<8>(opt1) << endl;
//	//cout << "opt2 : " << bitset<8>(opt2) << endl;
//	//cout << "opt3 : " << bitset<8>(opt3) << endl;
//	//cout << "opt4 : " << bitset<8>(opt4) << endl;
//
//	unsigned char item_flag = 0;
//
//	cout << "No item : " << bitset<8>(item_flag) << endl;
//
//	// item0 obtained
//	item_flag |= opt0;
//	cout << "item0 obtained : " << bitset<8>(item_flag) << endl;
//	// item3 obtained
//	item_flag |= opt3;
//	cout << "item3 obtained : " << bitset<8>(item_flag) << endl;
//
//	// item3 lost
//	item_flag &= ~opt3;
//	cout << "item3 lost : " << bitset<8>(item_flag) << endl;
//
//	// has item1?
//	if (item_flag & opt1) { cout << "Have item1" << endl; }
//	else { cout << "Don't have item1" << endl; }
//	// has item0?
//	if (item_flag & opt0) { cout << "Have item0" << endl; }
//
//	// obtain item2, 3
//	item_flag |= opt2 | opt3;
//	cout << bitset<8>(opt2 | opt3) << endl;
//	cout << "item2, 3 obtained : " << bitset<8>(item_flag) << endl;
//
//	// obtain item 1 and lose item 2
//	if ((item_flag & opt2) && !(item_flag & opt1))
//	{
//		item_flag ^= opt2; //XOR연산을 통해 상태를 변경할 수 있음.
//		item_flag ^= opt1;
//	}
//
//	return 0;
//}