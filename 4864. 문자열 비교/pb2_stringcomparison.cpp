// 문자열 비교
//https://velog.io/@yunhlim/SWEA-4864.-%ED%8C%8C%EC%9D%B4%EC%8D%AC-SW-%EB%AC%B8%EC%A0%9C%ED%95%B4%EA%B2%B0-%EA%B8%B0%EB%B3%B8-3%EC%9D%BC%EC%B0%A8-%EB%AC%B8%EC%9E%90%EC%97%B4-%EB%B9%84%EA%B5%90-D2

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
		string str1;
		string str2;

		cin >> str1 >> str2;

		bool check;
		int index = str2.find(str1);
		if (index == -1)
		{
			cout << "0\n";
		}
		else
		{
			cout << "1\n";
		}
	}
}