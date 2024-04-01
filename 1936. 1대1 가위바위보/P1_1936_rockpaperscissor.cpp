#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv){

	//int test_case;
	//int T;
	int A, B;
	string Win;
	freopen_s(new FILE*, "test.txt", "r", stdin);

	//cin >> T;
	cin >> A >> B;

	//for (test_case = 1; test_case <= T; ++test_case)
	//{
	//
	//}
	//가위는 1, 바위는 2, 보는 3
	switch (A)
	{
	case 1: 
		if (B == 2) Win = "B";
		else Win = "A";
		break;
	case 2:
		if (B == 1) Win = "A";
		else Win = "B";
		break;
	case 3:
		if (B == 1) Win = "B";
		else Win = "A";
		break;
	}

	cout << Win << "\n";

	return 0;
}