#include <iostream>

using namespace std;




int main()
{
	int score[] = {84, 92, 67, 81, 56};

	const int num_students = sizeof(score) / sizeof(int); //(4*5) / 4

	int total_score = 0;
	int max_score = 0;

	//�迭���鼭 �ջ�, �ְ��� ���ϱ�
	for (int i = 0; i < num_students; ++i)
	{
		total_score += score[i];
		max_score = (max_score < score[i]) ? score[i] : max_score;
	}

	//��ձ��ϱ�
	double avg_score = static_cast<double>(total_score) / num_students;



	return 0;
}