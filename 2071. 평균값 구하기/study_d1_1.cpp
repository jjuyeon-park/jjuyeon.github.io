//2071. ��հ� ���ϱ�

#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	freopen_s(new FILE*, "text.txt", "r", stdin);
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int arr[10] = { 0, };
		int sum = 0;
		double avg = 0;

		for (int i = 0; i < 10; i++)
		{
			cin >> arr[i];
			sum += arr[i];
		}

		//�Ҽ��� �������
		//https://atomic0x90.github.io/c++/2020/02/10/c++-decimal-place.html
		//cout << fixed;
		//cout.precision(1);

		//�ݿø�, �ø�, ����
		//https://blockdmask.tistory.com/112


		avg = sum / 10.0;
		cout << "#" << test_case <<  " " << round(avg) << "\n";
	}
	
	return 0;
	
}