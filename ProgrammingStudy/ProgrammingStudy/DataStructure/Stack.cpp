class Stack {
private:
	int* stack;
	int size;
	int top;

public:
	Stack(int newSize) {
		if (newSize <= 0) {
			throw std::invalid_argument("Size must be positive.");
		}
		size = newSize;
		stack = new int[newSize];
		top = -1;
	}

	~Stack() {
		delete[] stack;
		stack = nullptr;
	}

	
	bool Push(int data) {
		if (top < size - 1) {
			stack[++top] = data;
			return true;
		}
		else {
			return false; 
		}
	}

	int Pop() {
		if (IsEmpty()) {
			throw std::out_of_range("Stack is empty.");
		}
		return stack[top--];
	}

	bool IsEmpty() const {
		return top == -1;
	}

	bool IsFull() const {
		return top == size - 1;
	}
};