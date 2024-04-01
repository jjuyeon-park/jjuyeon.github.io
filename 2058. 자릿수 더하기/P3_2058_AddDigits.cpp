#include <iostream>

using namespace std;

int N;
int result;

void AddDigits() {
	int a, b, c, d;

	a = N / 1000;
	b = (N-(a * 1000)) / 100;
	c = (N-(a * 1000)-(b * 100)) / 10;
	d = (N - (a * 1000) - (b * 100)- (c * 10));

	result = a + b + c + d;
}

int main() {

	freopen_s(new FILE*, "test.txt", "r", stdin);
	cin >> N;

	AddDigits();
	cout << result << endl;
	

	return 0;
}