//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//#include <random>
//
//using namespace std;
//
//// min ~ max ������ ������ �����ϴ� �Լ�(�׳� �����)
//int getRandomNumber(int min, int max)
//{
//	// RAND_MAX�� 1.0���� �ణ ū ���� ���� 0.0 �̻� 1.0 �̸��� �Ǽ� ���� ����� ���� ���
//	static const double fraction = 1.0 / (RAND_MAX + 1.0);
//	// (max - min + 1)�� ũ�⸦ ���� ���� �� ������ �����ϰ� min�� ���� ���� ��� ��ȯ
//	return min + static_cast<int>((max-min + 1) * (std::rand() * fraction));
//}
//
//
//
//int main()
//{
//	//�õ�ѹ��� �����Ǹ� ��� ���� �������̺� ����
//	std::srand(5323); //seed ����
//
//	//Ÿ�� ����ϱ�
//	std::srand(static_cast<unsigned int>(std::time(0)));
//
//	for (int count = 1; count <= 100; ++count)
//	{
//		cout << std::rand() << "\t";
//
//		if(count % 5 == 0) cout << endl;
//	}
//
//	//C++11���� <random>���̺귯���� �ַ� ���
//	// ������ �ʱ� �õ带 ��� ���� ��ġ (�ϵ���� ��� ���� �߻���)
//	std::random_device rd;
//
//	// �޸��� Ʈ������ 64��Ʈ ���� ������ (��ǰ���� ���� ���� �˰���)
//	std::mt19937_64 mesenne(rd());
//
//	// �յ� ������ 1 ~ 6 ������ ���� ���� ����
//	std::uniform_int_distribution<> dice(1, 6);
//
//	// 1���� 20���� �� 20�� �ݺ��Ͽ� ���� ���
//	for (int count = 1; count <= 20; ++count)
//		cout << dice(mesenne) << endl;
//
//	return 0;
//}