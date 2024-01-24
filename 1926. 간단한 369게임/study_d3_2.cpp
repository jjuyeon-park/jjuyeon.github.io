//1926. 간단한 369게임
//숫자를 10으로 나누었을때 나머지가 3,6,9면 박수

#include <iostream>

using namespace std;

int main() {
	int T;

	freopen_s(new FILE*, "text2.txt", "r", stdin);

	cin >> T;

	for (int i = 0; i < T ;i++)
	{
		int num = i + 1;

		//num이 1000일때 분리
		switch (num) {

		case 1: num = 1000;
			cout << num << "\n";
		default:
			//3,6,9 개수만큼 박수 10 <= N <= 1000
			int a = num % 10; //1의자리
			int b = num / 10; //10의자리
			int c = num / 100; //100의자리
			int d = 0; //박수 개수 출력을 위한 변수 선언

			if (a == 3 || a == 6 || a == 9)
			{
				d += 1;
			}

			if (b == 3 || b == 6 || b == 9)
			{
				d += 1;
			}

			if (c == 3 || c == 6 || c == 9) {
				d += 1;
			}

			if (d != 0)
			{
				for (int i = 0; i < d; i++)
				{
					cout << "-";
				}
				cout << "\n";
			}
			else
			{
				cout << num << "\n";
			}
		}
		
		
	}

	return 0;
}