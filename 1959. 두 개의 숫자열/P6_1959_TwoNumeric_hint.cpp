#include<iostream>
#include<vector>

using namespace std;

int main() {
	freopen_s(new FILE*, "test.txt", "r", stdin);
	int T;
	cin >> T;

	for (int i = 1; i < T + 1; i++)
	{
		//각 숫자의 개수 입력
		int N, M;

		cin >> N;
		cin >> M;
		//벡터 선언
		vector<int> N_list;
		vector<int> M_list;
		//벡터에 각 숫자 개수만큼 값 넣기
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
		//각 숫자 자리의 곱의 합이 큰 것 찾기
		int biggest = 0;
		int temp;
		//M이 N보다 클때
		if (M > N) {
			//숫자 이동
			for (int j = 0; j < M - N + 1; j++)
			{
				temp = 0;
				//각 숫자자리의 곱의 합 구하고, 
				for (int k = 0; k < N; k++)
				{
					temp += N_list[k] * M_list[j + k];
				}
				//더 클 경우 치환
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
		//출력
		cout << "#" << i << " " << biggest << endl;
	}
	return 0;
}