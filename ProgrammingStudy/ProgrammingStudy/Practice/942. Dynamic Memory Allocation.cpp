//#include <iostream>
//
//using namespace std;
//
//
//
//int main()
//{
//	/*
//	   (��� 1)
//		int *ptr = new int;
//		*ptr = 7;
//		 
//		delete ptr;
//		
//		(��� 2)
//		int *ptr = new int{7};
//
//		delete ptr;
//
//		ptr = nullptr;
//		if(ptr != nullptr)
//		{
//			cout << ptr << endl;
//			cout << *ptr << endl;
//		}
//		
//	*/
//	//�޸� ������ �ص� �ش� �ּ� ��ü�� ������ ����Ǿ�
//	//�ֱ� ������ de-reference�� �ϸ� garbage���� ���.
//	//����, delete�ϰ��� �ش� ������ nullptr �� �־�ΰ� ����üũ�� �ϴ� ��찡 ������
//	//but, ������ ����Ʈ�������� ����� ���� ���ʿ����� ��ų.
//	
//	/*
//		(����ó�� ���)
//		int *ptr = new (std::nothrow)int {7}; //����ó�� ��� �� �ϳ�
//		int *ptr2 = ptr;
//
//		delete ptr;
//		ptr = nullptr;
//		//�� ��� ptr2�� �޸������� �����ʾ� Dangling Pointer ������ �߻�.
//		//�̷��� �������� �ذ��ϱ� ���� ����Ʈ�����Ͱ� ���Ե�.
//
//	*/
//
//	// Memory Leak(�޸� ����) ����
//	while (true)
//	{
//		int * ptr = new int; //�����Ҵ� �޾Ƴ��� �ݺ������鼭 ������ �ȵǴ� ����.
//		cout << ptr << endl;
//
//		delete ptr; //�ݵ�� �޸� ������!!!
//	}
//
//
//
//
//
//
//
//	return 0;
//}