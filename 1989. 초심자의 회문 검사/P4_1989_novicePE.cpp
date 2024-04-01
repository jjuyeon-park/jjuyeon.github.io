#include <iostream>
#include <string>

using namespace std;
/* 클래스 시도
class reverse_test {
	private:
		int result;
		string arrtext;
		string revtext;

	public:
		string reverse() {

		}

		int test_PE() {
			if (arrtext == revtext) result = 1;
			else result = 0;

			return result;
		}

};
*/


int main() {
	//"level" 과 같이 거꾸로 읽어도 제대로 읽은 것과 같은 문장이나 낱말을 회문
	//단어를 입력 받아 회문이면 1을 출력하고, 아니라면 0을 출력
	//각 단어의 길이는 3 이상 10 이하이다.
	//출력의 각 줄은 '#t'로 시작하고, 공백을 한 칸 둔 다음 정답을 출력
	int test_case;
	int T;

	string text_arr;

	freopen_s(new FILE*, "test.txt", "r", stdin);
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		cin >> text_arr;

		int N = text_arr.length();
		bool result = true;

		for (int i = 0; i < N/2; i++)
		{
			if (text_arr[i] != text_arr[N - 1 - i])
			{
				result = false;
				break;
			}
		}

		if (result == false)
			cout << "#" << test_case << ". " << 0 << endl;
		else
			cout << "#" << test_case << ". " << 1 << endl;

	}

	return 0;
}