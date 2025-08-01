#include <iostream>

struct Node
{
	int value;
	Node* next;
};

class Queue
{
private:
	Node* front = nullptr;
	Node* rear = nullptr;
	int count = 0;

public:
	Queue() = default;

	~Queue()
	{
		Clear();
	}

	void Enqueue(int value)
	{
		Node* newNode = new Node;
		newNode->value = value;
		newNode->next = nullptr;

		if (IsEmpty())
		{
			front = newNode;
			rear = newNode;
		}
		else
		{
			rear->next = newNode;
			rear = newNode;
		}
		count++;
	}

	int Dequeue()
	{
		if (IsEmpty())
		{
			return -1;
		}

		Node* targetNode = front;
		int data = targetNode->value;

		front = front->next;
		if (front == nullptr)
		{
			rear = nullptr;
		}

		delete targetNode;
		count--;
		return data;
	}

	bool IsEmpty() const
	{
		return front == nullptr;
	}

	int GetCount() const
	{
		return count;
	}

	void Clear()
	{
		while (!IsEmpty())
		{
			Dequeue();
		}
	}
};
