#include <iostream>
#include <string>
#include <vector>
//1. ���ڿ� ��� ������ �Է¹޴´�.
//2. �Է¹��� ��ŭ ���ڸ� ����ϰ� 10��° �ٴ� ���� ���� \n �ִ´�.


using namespace std;

int main() {

	int test_case;
	int T;

	//vector<char> v[] = { {0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0} };
	//v.push_back(Ci);


	freopen_s(new FILE*, "test.txt", "r", stdin);
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int N;
		char Ci;
		int Ki;
		int count=0;

		cin >> N;

		cout << "#" << test_case << endl;

		for (int i = 0; i < N; i++)
		{
			cin >> Ci;
			cin >> Ki;

			for (int j = 0; j < Ki; j++)
			{
				
				if (count > 0 && count % 10 == 0)
					cout << endl;

				cout << Ci;
				count++;
			}

		}
		cout << endl;
	}

	return 0;
}