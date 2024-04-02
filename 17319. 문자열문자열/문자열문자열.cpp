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
		int N;
		string str;

		cin >> N >> str;

		if (N % 2 == 1) {
			cout << "no\n";
			continue;
		}
		//문자열 파싱
		string target = str.substr(0, N / 2);
		int index = str.find(target, 1);
		//찾는 문자열 첫번쨰 인덱스값 리턴
		if (index == -1) cout << "no\n";
		else cout << "yes\n";
		

	}

	return 0;
}