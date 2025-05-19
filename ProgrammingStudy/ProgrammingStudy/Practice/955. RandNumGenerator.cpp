//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//#include <random>
//
//using namespace std;
//
//// min ~ max 사이의 난수를 생성하는 함수(그냥 참고용)
//int getRandomNumber(int min, int max)
//{
//	// RAND_MAX를 1.0보다 약간 큰 수로 나눠 0.0 이상 1.0 미만의 실수 값을 만들기 위한 상수
//	static const double fraction = 1.0 / (RAND_MAX + 1.0);
//	// (max - min + 1)의 크기를 가진 범위 내 난수를 생성하고 min을 더해 최종 결과 반환
//	return min + static_cast<int>((max-min + 1) * (std::rand() * fraction));
//}
//
//
//
//int main()
//{
//	//시드넘버가 고정되면 계속 같은 난수테이블 설정
//	std::srand(5323); //seed 설정
//
//	//타임 사용하기
//	std::srand(static_cast<unsigned int>(std::time(0)));
//
//	for (int count = 1; count <= 100; ++count)
//	{
//		cout << std::rand() << "\t";
//
//		if(count % 5 == 0) cout << endl;
//	}
//
//	//C++11부터 <random>라이브러리를 주로 사용
//	// 난수의 초기 시드를 얻기 위한 장치 (하드웨어 기반 난수 발생기)
//	std::random_device rd;
//
//	// 메르센 트위스터 64비트 난수 생성기 (고품질의 난수 생성 알고리즘)
//	std::mt19937_64 mesenne(rd());
//
//	// 균등 분포로 1 ~ 6 사이의 정수 난수 생성
//	std::uniform_int_distribution<> dice(1, 6);
//
//	// 1부터 20까지 총 20번 반복하여 난수 출력
//	for (int count = 1; count <= 20; ++count)
//		cout << dice(mesenne) << endl;
//
//	return 0;
//}