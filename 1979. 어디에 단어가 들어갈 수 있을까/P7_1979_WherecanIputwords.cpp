#include <iostream>
#include <vector>

using namespace std;

int main() {

	int test_case;
	int T;

	freopen_s(new FILE*, "test.txt", "r", stdin);
	cin >> T ;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int N, M; //N X N배열, M칸
		int buffer, count, total;
		int testarr[15][15] = { 0 }; //N최대값 15

		cin >> N >> M;

		for (int i = 0; i < N; i++)
			for (int j = 0; j < N; j++)
				cin >> testarr[i][j];

		//M 빈칸 찾기(빈칸 1 벽 0)

		total = 0;

		//1 가로(열) 찾기
		for (int i = 0; i < N; i++)
		{	
			count = 0;
			buffer = 0;
			for (int j = 0; j < N; j++)
			{
				if (testarr[i][j] == 1)
				{
					buffer++;
				}
				else
				{
					if (buffer == M)
					{
						count++;
					}
					buffer = 0;
				}
			}
			//열 끝에 존재할 경우 카운트
			if (buffer == M) {
				count++;
			}
			total += count;
		}
		
		//1 세로(행) 찾기
		for (int j = 0; j < N; j++)
		{
			count = 0;
			buffer = 0;
			for (int i = 0; i < N; i++)
			{
				if (testarr[i][j] == 1)
				{
					buffer++;
				}
				else
				{
					if (buffer == M)
					{
						count++;
					}
					buffer = 0;
				}
			}
			//행 끝에 존재할 경우 카운트
			if (buffer == M) {
				count++;
			}
			total += count;
		}

		cout << "#" << test_case << " " << total << endl;
		/* vector 시도
		
		cin >> N >> K;

		int count = 0;
		vector < vector <int> > v(N, vector <int>(N, 0));

		for (int i = 0; i < N*N; i++)
		{
			cin >> v.back();
		}

		for (int i = 0; i < N; i++)
		{
			if(v[i])
		}*/
	}

	return 0;
}