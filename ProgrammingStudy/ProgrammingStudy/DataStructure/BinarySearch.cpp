int BinarySearch(int* arr, int size, int key)
{
	int lower = 0;
	int upper = size;

	while (lower < upper)
	{
		int mid = lower + (upper - lower) / 2;

		if (arr[mid] == key)
		{
			return mid;
		}
		else if (arr[mid] > key)
		{
			upper = mid;
		}
		else
		{
			lower = mid + 1;
		}
	}

	return -1;
}