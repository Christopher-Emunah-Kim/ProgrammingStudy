
int* stack;
int size;
int top = -1;

void InitStack(int newSize)
{
	size = newSize;
	stack = new int[newSize];
}


void DeleteStack()
{
	delete[] stack;
	stack = nullptr;
	size = 0;
	top = -1;
}


bool Push(int data)
{
	if(top < size - 1)
	{
		top++;
		stack[top] = data;
		return true;
	}
	else
	{
		return false;
	}
}

int Pop()
{
	if (top >= 0)
	{
		return stack[top--];
	}
	else
	{
		return -1;
	}
}