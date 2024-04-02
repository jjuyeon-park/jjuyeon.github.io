//17319.문자열문자열

#include <iostream>
#include <string>

using namespace std;

int main() {

	int T;
	int test_case;

	freopen_s(new FILE*, "text.txt", "r", stdin);
	cin >> T;

	for (test_case = 1; test_case <= T; test_case++)
	{
		int n = 0;
		string str;

		cin >> n >> str;
		

		if (n % 2 == 0)
		{
			string target = str.substr(0, n / 2);
			int index = str.find(target,1);
			if (index == -1) //왜 index -1 ??
			{
				cout << "no\n";
			}
			else {
				cout << "yes\n";
			}

		}
		else {
			cout << "No\n";
		}
	}

	return 0;
}