
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
		// 10���� ���� ��й�ȣ�� array�� ��Ƽ� ������ ��й�ȣ�� index�� ����϶�
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
		// ��
		for (int y = 0; y < 10; y++)
		{
			if (pass != array[y]) continue;
			cout << y + 1 << "\n";
			break;
		}
		
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}