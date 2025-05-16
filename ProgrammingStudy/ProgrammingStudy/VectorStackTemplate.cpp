#include <iostream>


//탬플릿 스택 클래스 정의
template < typename T>
class VectorStack
{
	private:
		T* V_Stack; // 스택을 저장할 배열
		int TopIndex; // 스택의 최상위 인덱스
		int Capacity; // 스택의 용량

	public:
		VectorStack(int maxSize = 100) : Capacity(maxSize), TopIndex(-1)
		{
			V_Stack = new T[Capacity]; //스택 배열 동적 할당
		}

		~VectorStack()
		{
			delete[] V_Stack; // 스택 배열 메모리 해제
		}

		bool isEmpty() const
		{
			return TopIndex == -1; // 스택이 비어있는지 확인
		}

		bool isFull() const
		{
			return TopIndex == Capacity - 1; // 스택이 가득 찼는지 확인
		}

		void Push(const T& value)
		{
			if (isFull()) {
				std::cout<< "Stack is Full!" << std::endl;
			}
			return V_Stack[++TopIndex] = value; // 스택에 값 추가
		}

		void Pop()
		{
			if (isEmpty())
			{
				std::cout << "Stack is Empty!" << std::endl;
			}
			--TopIndex; // 스택에서 값 제거(개념상)
		}

		T& Top()
		{
			if(isEmpty())
			{
				std::cout << "Stack is Empty!" << std::endl;
			}
			return V_Stack[TopIndex]; // 스택의 최상위 값 반환
		}

		int Size()
		{
			return TopIndex + 1; // 스택의 크기 반환
		}
};