//15758. 무한 문자열
//https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AYP5JmsqcngDFATW&categoryId=AYP5JmsqcngDFATW&categoryType=CODE&problemTitle=%EB%AC%B4%ED%95%9C&orderBy=FIRST_REG_DATETIME&selectCodeLang=ALL&select-1=&pageSize=10&pageIndex=1

#include <iostream>
#include <string>

using namespace std;

int main() {
	int T;
	int test_case;

	freopen_s(new FILE*, "text.txt", "r", stdin);

	cin >> T;

	for (test_case = 1; test_case <= T; test_case++) {
		string str1;
		string str2;

		cin >> str1 >> str2;

		int len = str1.length() * str2.length();

		if (str1.length() > str2.length())
		{
			int index = str1.find(str2);
			if (index == -1) cout << "no\n";
			else cout << "yes\n";
		}
		else
		{
			int index = str2.find(str1);
			if (index == -1) cout << "no\n";
			else cout << "yes\n";
		}
		

	}
}