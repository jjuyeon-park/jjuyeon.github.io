//���� �˰��� ����Ͽ� ����

#include <iostream>
#include <string>
#include<algorithm> 

using namespace std;

int main(int argc, char** argv) {

	//int test_case;
	//int T;
	int N;
	int k;

	freopen_s(new FILE*, "test.txt", "r", stdin);

	//cin >> T;
	cin >> N;
	int *arr = new int[N]; //���� �迭 ����

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];

	}
	sort(arr, arr + N); //�˰��� ���̺귯���� sort()�Լ� ����
	

	k = N / 2;
	cout << arr[k] << "\n";

	delete[] arr;

	return 0;
}