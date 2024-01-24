
#include<iostream>

using namespace std;

int main()
{
	int test_case;
	int T;
	int F;
	freopen_s(new FILE*, "Text.txt", "r", stdin);
	cin >> T >> F;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		// 10개의 예비 비밀번호를 array에 담아서 정답인 비밀번호의 index를 출력하라
		int pass;
		int array[10] = { 0, };
		cin >> pass;
		for (int i = 0; i < F; i++)
		{
			cin >> array[i];
		}

		for (int y = 0; y < 10; y++)
		{
			if (pass == array[y]) {
				cout << y + 1 << "\n";
				break;
			}
		}
		// 역
		for (int y = 0; y < 10; y++)
		{
			if (pass != array[y]) continue;
			cout << y + 1 << "\n";
			break;
		}
		
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}