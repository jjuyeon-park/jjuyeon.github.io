//1926. ������ 369����
//���ڸ� 10���� ���������� �������� 3,6,9�� �ڼ�

#include <iostream>

using namespace std;

int main() {
	int T;

	freopen_s(new FILE*, "text2.txt", "r", stdin);

	cin >> T;

	for (int i = 0; i < T ;i++)
	{
		int num = i + 1;

		//num�� 1000�϶� �и�
		switch (num) {

		case 1: num = 1000;
			cout << num << "\n";
		default:
			//3,6,9 ������ŭ �ڼ� 10 <= N <= 1000
			int a = num % 10; //1���ڸ�
			int b = num / 10; //10���ڸ�
			int c = num / 100; //100���ڸ�
			int d = 0; //�ڼ� ���� ����� ���� ���� ����

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