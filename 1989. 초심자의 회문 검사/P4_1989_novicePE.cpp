#include <iostream>
#include <string>

using namespace std;
/* Ŭ���� �õ�
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
	//"level" �� ���� �Ųٷ� �о ����� ���� �Ͱ� ���� �����̳� ������ ȸ��
	//�ܾ �Է� �޾� ȸ���̸� 1�� ����ϰ�, �ƴ϶�� 0�� ���
	//�� �ܾ��� ���̴� 3 �̻� 10 �����̴�.
	//����� �� ���� '#t'�� �����ϰ�, ������ �� ĭ �� ���� ������ ���
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