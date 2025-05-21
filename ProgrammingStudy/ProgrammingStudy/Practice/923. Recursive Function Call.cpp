//#include <iostream>  
//
//using namespace std;  
//
//void CountDown(int count)
//{
//	cout << count << endl;
//	//종료조건(없으면 스택오버플로우 위험성 up)
//	if(count >0)
//		CountDown(count - 1);
//}
//
////일반 재귀 호출 vs 꼬리 재귀 호출
//int factorial(int n) {
//	if (n <= 1) return 1;
//	return n * factorial(n - 1); // ← 여기서 재귀 호출 뒤에 곱셈 연산이 남아 있음
//}
//
///*
//	factorial(3)
//	 → 3 * factorial(2)
//		 → 2 * factorial(1)
//			 → 1
//	 ⇒ 2 * 1 = 2
//	 ⇒ 3 * 2 = 6
//	 -> 재귀 호출 리턴 후에도 해당 값들에 곱셈연산을 
//	     추가로 해서 스택프레임을 해제해야함
//*/
//
//int tailFactorial(int n, int acc = 1) {
//	if (n <= 1) return acc;
//	return tailFactorial(n - 1, acc * n); // ← 연산을 먼저 하고 재귀호출만 남음
//}
//
///*
//	tailFactorial(3, 1)
//	 → tailFactorial(2, 3)
//		 → tailFactorial(1, 6)
//			 → return 6
//	-> 모든 연산 결과를 인자인 acc에 누적해서 전달하므로, 
//	   재귀 호출 후 추가 작업이 필요 없음 
//	→ 스택 프레임 유지 없이 최적화 가능
//
//*/
//
//
//int main()
//{
//	CountDown(5);
//
//	return 0;
//}
//
