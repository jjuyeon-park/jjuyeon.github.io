#include <iostream>

using namespace std;

int main() {

	int test_case;
	int T;

	freopen_s(new FILE*, "test.txt", "r", stdin);
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int N, M;
		int maskSum;
		int max = 0;
		//2�����迭 �����Ҵ� ����
		//�б� ���� �߻�
		//int **testarr = {0,};

		//N�ִ밡 15�̹Ƿ� 15�� ����
		int testarr[15][15] = { 0 };

		cin >> N >> M;

		for (int i = 0; i < N; i++)
			for (int j = 0; j < N; j++)
				cin >> testarr[i][j];


		for (int i = 0; i < N - M + 1; i++)
		{
			for (int j = 0; j < N - M + 1; j++)
			{
				maskSum = 0;

				for (int k = 0; k < M; k++)
					for (int q = 0; q < M; q++)
						maskSum += testarr[i + k][j + q];

				if (maskSum > max)
					max = maskSum;
				
			}
		}

		cout << "#" << test_case << " " << max << endl;

		//�����Ҵ� ����
		/*for (int i = 0; i < N; i++) {
			delete[] testarr[i];
		}
		delete[] testarr;*/
	}


	return 0;
}