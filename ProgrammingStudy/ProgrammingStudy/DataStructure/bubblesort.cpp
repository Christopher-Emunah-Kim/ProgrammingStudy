void BublleSort(int* arr, int num)
{
	for (int i = 0; i < num - 1; i++)
	{
		bool swapped = false;
		for (int j = 0; j < num - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				std::swap(arr[j], arr[j + 1]);
				swapped = true;
			}
		}
		if (swapped)
		{
			break;
		}
	}
}