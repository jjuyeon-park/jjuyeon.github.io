#include <iostream>
#include <vector>

using namespace std;

int main() {

	int test_case;
	int T;

	freopen_s(new FILE*, "test.txt", "r", stdin);
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int N, M;
		cin >> N >> M;

		vector<int> N_list;
		vector<int> M_list;

		int each_num;

		for ( int i = 0; i < N; i++)
		{
			cin >> each_num;
			N_list.push_back(each_num);
		}

		for (int j = 0; j < M; j++)
		{
			cin >> each_num;
			M_list.push_back(each_num);
		}

		//��
		int temp;
		int max = 0;

		if (M > N) {
			for (int i = 0; i < M - N + 1; i++)//�̵� Ƚ����ŭ �ݺ�
			{
				temp = 0;
				for (int j = 0; j < N; j++)//N��ŭ �ݺ� ����
				{
					temp += N_list[j] * M_list[j + i];
				}
				if (temp > max) max = temp;
			}
		}
		else {
			for (int i = 0; i < N - M + 1; i++)//�̵� Ƚ����ŭ �ݺ�
			{
				temp = 0;
				for (int j = 0; j < M; j++)//M��ŭ �ݺ� ����
				{
					temp += M_list[j] * N_list[j + i];
				}
				if (temp > max) max = temp;
			}
		}
		cout << "#" << test_case <<" " << max << endl;
	}

	return 0;
}