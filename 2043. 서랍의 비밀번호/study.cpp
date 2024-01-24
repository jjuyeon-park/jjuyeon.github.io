
#include<iostream>

using namespace std;

int main()
{
	int test_case;
	int T;
	freopen_s(new FILE*, "Text.txt", "r", stdin);
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int pass;
		int array[10] = { 0, };
		cin >> pass;
		for (int i = 0; i < 10; i++)
		{
			cin >> array[i];
		}

		for (int y = 0; y < 10; y++)
		{
			if (pass == array[y]) {
				cout << y << "\n";
				break;
			}
		}

		for (int y = 0; y < 10; y++)
		{
			if (pass != array[y]) continue;
			cout << y << "\n";
			break;
		}
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}