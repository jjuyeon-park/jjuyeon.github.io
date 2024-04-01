//기존 알고리즘 사용하여 정렬

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
	int *arr = new int[N]; //동적 배열 선언

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];

	}
	sort(arr, arr + N); //알고리즘 라이브러리에 sort()함수 존재
	

	k = N / 2;
	cout << arr[k] << "\n";

	delete[] arr;

	return 0;
}