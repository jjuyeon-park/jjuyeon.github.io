//study_d2_1: 2050 ���ĺ��� ���ڷ� ��ȯ


#include <iostream>
#include <string>

using namespace std;

int main() {

	freopen_s(new FILE*, "text.txt", "r", stdin);

	//string Ŭ����, ����
	//https://rebro.kr/53


	/*�׽�Ʈ
	string str;
	cin >> str;

	cout << str.length() << "\n";
	cout << str.size() << "\n";
	cout << str.capacity() << "\n";
	*/

	//���ڿ� ���� n ��� ����(������ ��ȯ)
	string str;

	// ABC
	cin >> str;

	for (int i = 0; i < str.length(); i++)
	{
		cout << str[i] - 'A' + 1 << " ";
	}
	//cout << "\n";

	//char ch[26] = "ABC";
	//for (int i = 0; i < sizeof(ch) / sizeof(char); i++) {
	//	cout << ch[i];
	//}
	//int h = 0;
	//int ih[3] = {'A', 'B', 'C'};

	/*
	//https://taxol1203.github.io/language/String-%EB%B0%B0%EC%97%B4-%EC%9E%85%EB%A0%A5/
	int n;
	cin >> n;
	string temp;
	string strArr[n];

	for (int i = 0; i < n; i++) {
		cin >> strArr[i];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << strArr[i][j] << " ";
		}
		cout << "\n";
	*/

	
	return 0;
}