//#include <iostream>
//#include <bitset> //������ ��ȯ�� ���� �������
//
//
//using namespace std;
//
//int main()
//{
//	unsigned char opt_viewed  = 0x01;
//	unsigned char opt_edited  = 0x02;
//	unsigned char opt_liked   = 0x04;
//	unsigned char opt_shared  = 0x08;
//	unsigned char opt_deleted = 0x80;
//
//	unsigned char my_article_flags = 0;
//
//	//���� �÷��׸� ���� �Ʒ��� �ڵ带 �ۼ��ϼ���
//
//	//��縦 ������
//	my_article_flags |= opt_viewed;
//
//	cout << bitset<16>(my_article_flags) << endl;
//
//	if(my_article_flags & opt_viewed) { cout << "��縦 �ý��ϴ�." <<endl; }
//
//	//����� ���ƿ並 Ŭ��������
//	my_article_flags |= opt_liked;
//
//	if (my_article_flags & opt_liked) { cout << "��縦 ���ƿ� �߽��ϴ�." << endl; }
//
//	//����� ���ƿ並 �ٽ� Ŭ��������
//	my_article_flags ^= opt_liked;
//
//	if (my_article_flags & opt_liked) { cout << "��縦 ���ƿ� �߽��ϴ�." << endl; }
//	else { cout << "��縦 ���ƿ� ����߽��ϴ�." << endl; }
//
//	//��縦 �����Ҷ�
//	my_article_flags |= opt_deleted;
//	if (my_article_flags & opt_deleted) { cout << "��縦 �����߽��ϴ�." << endl; }
//
//
//	return 0;
//}