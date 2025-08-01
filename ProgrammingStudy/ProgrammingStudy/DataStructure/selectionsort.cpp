template <typename T>
void SelectionSort(T* arr, int num)
{
	for (int i = 0; i < num - 1; ++i)
	{
		int min_idx = i;

		for (int j = i + 1; j < num; ++j)
		{
			if (arr[j] < arr[min_idx])
			{
				min_idx = j;
			}
		}

		if (min_idx != i)
		{
			std::swap(arr[i], arr[min_idx]);
		}
	}
}