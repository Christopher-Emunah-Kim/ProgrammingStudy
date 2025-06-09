#include <iostream>





template<typename T, size_t size>
class Array
{
public:



private:
	T data[size];

public:
	size_t Size() const
	{
		return size;
	}

	T& operator[](size_t index)
	{
		if (index >= size)
		{
			__debugbreak(); //디버그 모드에서만 작동
		}

		return data[index];
	}

	const T& operator [](size_t index) const 
	{
		if (index >= size)
		{
			__debugbreak(); //디버그 모드에서만 작동
		}

		return data[index];
	}

	T* Data()
	{
		return data;
	}

	const T* Data() const 
	{
		return data;
	}
};





int main()
{
	Array<int, 5> data;

	memset(data.Data(), 0, data.Size() * sizeof(int));

	std::cin.get();

	return 0;
}