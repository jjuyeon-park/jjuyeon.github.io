#include <iostream>

using namespace std;


int main() {
	int test_case;
	int T;

	freopen_s(new FILE*,"test.txt","r", stdin);

	cin >> T;

	for (test_case = 1;	test_case <= T; ++test_case)
	{
		//����
		int Tarr[9][9];
		int buffer = 0;

		//�迭 �Է�
		for (int i = 0; i < 9; i++)
			for (int j = 0; j < 9; j++)
				cin >> Tarr[i][j];

		//���
		cout << "#" << test_case << " ";

		//����
		//1.����(��)
		for (int i = 0; i < 9; i++)
			for (int j = 0; j < 9; j++)
				for (int k = 1; k < 9 - j; k++)
					if (Tarr[i][j] == Tarr[i][j + k])
						buffer++;
						
		if (buffer > 0){
			cout << 0 << endl;
			continue;
		}

		//2.����(��)
		for (int j = 0; j < 9; j++)
			for (int i = 0; i < 9; i++)
				for (int k = 1; k < 9 - i; k++)
					if (Tarr[i][j] == Tarr[i + k][j])
						buffer++;

		if (buffer > 0) {
			cout << 0 << endl;
			continue;
		}

		//3.3X3
		for (int i = 0; i < 9; i = i + 3)
			for (int j = 0; j < 9; j = j + 3)
				for (int k = 0; k < 3; k++)
					for (int g = 0; g < 3; g++)
						if (Tarr[i][j] == Tarr[i + k][j + g])
							buffer++;

		//Tarr[0,0], Tarr[0,3], Tarr[0,6]
		//Tarr[3,0], Tarr[3,3], Tarr[3,6]
		//Tarr[6,0], Tarr[6,3], Tarr[6,6]
		//�� ��� ���� �ö� ���� buffer>9 ����
		if (buffer > 9) {
			cout << 0 << endl;
			continue;
		}
		else {
			cout << 1 << endl;
		}

	}

	return 0;
}