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

		//ºñ±³
		int temp;
		int max = 0;

		if (M > N) {
			for (int i = 0; i < M - N + 1; i++)//ÀÌµ¿ È½¼ö¸¸Å­ ¹Ýº¹
			{
				temp = 0;
				for (int j = 0; j < N; j++)//N¸¸Å­ ¹Ýº¹ µ¡¼À
				{
					temp += N_list[j] * M_list[j + i];
				}
				if (temp > max) max = temp;
			}
		}
		else {
			for (int i = 0; i < N - M + 1; i++)//ÀÌµ¿ È½¼ö¸¸Å­ ¹Ýº¹
			{
				temp = 0;
				for (int j = 0; j < M; j++)//M¸¸Å­ ¹Ýº¹ µ¡¼À
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