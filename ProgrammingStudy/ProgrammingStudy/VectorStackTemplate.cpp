#include <iostream>


//���ø� ���� Ŭ���� ����
template < typename T>
class VectorStack
{
	private:
		T* V_Stack; // ������ ������ �迭
		int TopIndex; // ������ �ֻ��� �ε���
		int Capacity; // ������ �뷮

	public:
		VectorStack(int maxSize = 100) : Capacity(maxSize), TopIndex(-1)
		{
			V_Stack = new T[Capacity]; //���� �迭 ���� �Ҵ�
		}

		~VectorStack()
		{
			delete[] V_Stack; // ���� �迭 �޸� ����
		}

		bool isEmpty() const
		{
			return TopIndex == -1; // ������ ����ִ��� Ȯ��
		}

		bool isFull() const
		{
			return TopIndex == Capacity - 1; // ������ ���� á���� Ȯ��
		}

		void Push(const T& value)
		{
			if (isFull()) {
				std::cout<< "Stack is Full!" << std::endl;
			}
			return V_Stack[++TopIndex] = value; // ���ÿ� �� �߰�
		}

		void Pop()
		{
			if (isEmpty())
			{
				std::cout << "Stack is Empty!" << std::endl;
			}
			--TopIndex; // ���ÿ��� �� ����(�����)
		}

		T& Top()
		{
			if(isEmpty())
			{
				std::cout << "Stack is Empty!" << std::endl;
			}
			return V_Stack[TopIndex]; // ������ �ֻ��� �� ��ȯ
		}

		int Size()
		{
			return TopIndex + 1; // ������ ũ�� ��ȯ
		}
};