#include <iostream>

using namespace std;

int main() {

	int test_case;
	int T;

	freopen_s(new FILE*, "test.txt", "r", stdin);
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		//N�� 7 ����
		int N;
		int Tarr[7][7];

		cin >> N;

		//�迭 �Է�
		for (int i = 0; i < N; i++)
			for (int j = 0; j < N; j++)
				cin >> Tarr[i][j];

		//���
		cout << "#" << test_case << endl;

		for (int j = 0; j < N; j++)
		{
			for (int i = 0; i < N; i++)
				cout << Tarr[N - 1 - i][j];	
			cout << " ";

			for (int i = 0; i < N; i++)
				cout << Tarr[N - 1- j][N - 1- i];
			cout << " ";

			for (int i = 0; i < N; i++)
				cout << Tarr[i][N -1- j];
			cout << endl;
		}

	}

	return 0;
}