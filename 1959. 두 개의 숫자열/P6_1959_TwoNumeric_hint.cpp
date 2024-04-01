#include<iostream>
#include<vector>

using namespace std;

int main() {
	freopen_s(new FILE*, "test.txt", "r", stdin);
	int T;
	cin >> T;

	for (int i = 1; i < T + 1; i++)
	{
		//�� ������ ���� �Է�
		int N, M;

		cin >> N;
		cin >> M;
		//���� ����
		vector<int> N_list;
		vector<int> M_list;
		//���Ϳ� �� ���� ������ŭ �� �ֱ�
		int each_num;

		for (int j = 0; j < N; j++)
		{
			cin >> each_num;
			N_list.push_back(each_num);
		}

		for (int j = 0; j < M; j++)
		{
			cin >> each_num;
			M_list.push_back(each_num);
		}
		//�� ���� �ڸ��� ���� ���� ū �� ã��
		int biggest = 0;
		int temp;
		//M�� N���� Ŭ��
		if (M > N) {
			//���� �̵�
			for (int j = 0; j < M - N + 1; j++)
			{
				temp = 0;
				//�� �����ڸ��� ���� �� ���ϰ�, 
				for (int k = 0; k < N; k++)
				{
					temp += N_list[k] * M_list[j + k];
				}
				//�� Ŭ ��� ġȯ
				if (temp > biggest) biggest = temp;
			}
		}
		else
		{
			for (int j = 0; j < N - M + 1; j++)
			{
				temp = 0;
				for (int k = 0; k < M; k++)
				{
					temp += M_list[k] * N_list[j + k];
				}
				if (temp > biggest) biggest = temp;
			}
		}
		//���
		cout << "#" << i << " " << biggest << endl;
	}
	return 0;
}