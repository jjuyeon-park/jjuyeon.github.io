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
		//���ڿ� �Ľ�
		string target = str.substr(0, N / 2);
		int index = str.find(target, 1);
		//ã�� ���ڿ� ù���� �ε����� ����
		if (index == -1) cout << "no\n";
		else cout << "yes\n";
		

	}

	return 0;
}