//버블 sort 사용하여 정렬
#include <iostream>
#include <string>

using namespace std;

int main() {
	int N;
	int k;
	int temp;

	freopen_s(new FILE*, "test.txt", "r", stdin);

	cin >> N;
	k = N / 2;

	int *arr = new int[N];

	for (int  i = 0 ; i < N ; i++)
	{
		cin >> arr[i];

		for (int j = 0; j < N; j++)
		{
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < N; i++)
	{
		cout << i+1 << ". " << arr[i] << endl;
	}

	cout << "Result : " << arr[k] << endl;

	delete[] arr;

	return 0;
}