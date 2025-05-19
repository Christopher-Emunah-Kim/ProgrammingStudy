//#include <iostream>
//#include <bitset> //이진수 변환을 위한 헤더파일
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
//	//위의 플래그를 보고 아래의 코드를 작성하세요
//
//	//기사를 봤을때
//	my_article_flags |= opt_viewed;
//
//	cout << bitset<16>(my_article_flags) << endl;
//
//	if(my_article_flags & opt_viewed) { cout << "기사를 봤습니다." <<endl; }
//
//	//기사의 좋아요를 클릭했을때
//	my_article_flags |= opt_liked;
//
//	if (my_article_flags & opt_liked) { cout << "기사를 좋아요 했습니다." << endl; }
//
//	//기사의 좋아요를 다시 클릭했을때
//	my_article_flags ^= opt_liked;
//
//	if (my_article_flags & opt_liked) { cout << "기사를 좋아요 했습니다." << endl; }
//	else { cout << "기사를 좋아요 취소했습니다." << endl; }
//
//	//기사를 삭제할때
//	my_article_flags |= opt_deleted;
//	if (my_article_flags & opt_deleted) { cout << "기사를 삭제했습니다." << endl; }
//
//
//	return 0;
//}