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
		int N, M; //N X N�迭, Mĭ
		int buffer, count, total;
		int testarr[15][15] = { 0 }; //N�ִ밪 15

		cin >> N >> M;

		for (int i = 0; i < N; i++)
			for (int j = 0; j < N; j++)
				cin >> testarr[i][j];

		//M ��ĭ ã��(��ĭ 1 �� 0)

		total = 0;

		//1 ����(��) ã��
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
			//�� ���� ������ ��� ī��Ʈ
			if (buffer == M) {
				count++;
			}
			total += count;
		}
		
		//1 ����(��) ã��
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
			//�� ���� ������ ��� ī��Ʈ
			if (buffer == M) {
				count++;
			}
			total += count;
		}

		cout << "#" << test_case << " " << total << endl;
		/* vector �õ�
		
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