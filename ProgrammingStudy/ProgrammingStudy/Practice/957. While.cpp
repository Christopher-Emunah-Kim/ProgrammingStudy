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
//	//�� ���� true�� ���� �ݺ�
//	while (true)
//	{
//		cout << "Enter a number (0 to exit): ";
//		cin >> count;
//		if (count == 0)
//			break; // 0�� �ԷµǸ� �ݺ��� ����
//		cout << "You entered: " << count << endl;
//
//	}
//
//
//	//while�� + unsigned Ÿ���� ������. 
//	//�Ժη� ��ٰ� overflow ������ �߻���ų �� ����.
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
//	//�ߺ� while��
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
//	//do-while��(�ݵ�� 1���� ����)
//	//do-while�� �ڿ��� �����ݷ��� �ݵ�� �־����(����)
//	int selction;
//	do
//	{
//		cin>> selction;
//	}
//	while (selction <= 0 || selction >= 5); 
//
//	return 0;
//}