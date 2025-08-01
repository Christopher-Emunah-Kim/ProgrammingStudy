template <typename T>
void InsertionSort(T* arr, int num)
{
	//두번째 요소부터 끝까지 순회.
	for (int i = 1; i < num; ++i)
	{
		//정렬할 원소 임시저장
		T key = arr[i];
		int j = i - 1;
		//현재 원소보다 큰 원소들을 모두 한칸씩 밀어냄
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}

		//삽입
		arr[j + 1] = key;
	}
}