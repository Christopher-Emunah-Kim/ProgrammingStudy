//#include <iostream>
//
//using namespace std;
//
//
//int main()
//{
//
//	int count;
//
//	//블럭 안이 true면 무한 반복
//	while (true)
//	{
//		cout << "Enter a number (0 to exit): ";
//		cin >> count;
//		if (count == 0)
//			break; // 0이 입력되면 반복문 종료
//		cout << "You entered: " << count << endl;
//
//	}
//
//
//	//while문 + unsigned 타입의 문제점. 
//	//함부로 썼다가 overflow 문제를 발생시킬 수 있음.
//	unsigned int count2 = 10;
//
//	while (count2 >= 0)
//	{
//		if(count2 == 0) cout << "zero";
//		else cout << count2 << "";
//
//		count2--;
//	}
//
//	//중복 while문
//	int outer_count = 1;
//
//	while (outer_count <= 5)
//	{
//		int inner_count = 1;
//		while (inner_count <= outer_count)
//		{
//			cout << inner_count++ << "";
//		}
//		cout << endl;
//		++outer_count;
//	}
//
//
//	//do-while문(반드시 1번은 실행)
//	//do-while문 뒤에는 세미콜론이 반드시 있어야함(주의)
//	int selction;
//	do
//	{
//		cin>> selction;
//	}
//	while (selction <= 0 || selction >= 5); 
//
//	return 0;
//}