
//study_d3_1 : 1970 쉬운 거스름돈
#include <iostream>

using namespace std;

int main() {
	int test_case;
	int T;

	freopen_s(new FILE*, "text.txt", "r", stdin);

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int n;
		cin >> n;

		int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g=0;
		cout << "#" << test_case << "\n";
		cout << n / 50000 << " ";
		a = n % 50000;

		cout << a / 10000 << " ";
		b = a % 10000;

		cout << b / 5000 << " ";
		c = b % 5000;

		cout << c / 1000 << " ";
		d = c % 1000;

		cout << d / 500 << " ";
		e = d % 500;

		cout << e / 100 << " ";
		f = e % 100;

		cout << f / 50 << " ";
		g = f % 50;

		cout << g / 10 << " \n";
		
	}
	return 0;
}