
//13229. 일요일
//https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AX0SaDW6L2oDFASs&categoryId=AX0SaDW6L2oDFASs&categoryType=CODE&problemTitle=%EC%9D%BC%EC%9A%94&orderBy=FIRST_REG_DATETIME&selectCodeLang=ALL&select-1=&pageSize=10&pageIndex=1

#include <iostream>
#include <string>

using namespace std;

int main() {

	int T;
	int test_case;

	freopen_s(new FILE*, "text.txt", "r", stdin);

	cin >> T;

	for (test_case = 1; test_case <= T; test_case++) {
		string day;
		cin >> day;

		//"MON”(월), “TUE”(화), “WED”(수), “THU”(목), “FRI”(금), “SAT”(토), “SUN”(일) 
		string sch[] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"  };

		int k = 0;

		for (int i = 0; i < 7; i++)
		{
			if (day == sch[i])
			{
				k = i;
				break;
			}
		}

		switch (k)
		{
		case 0:
			cout << "7\n";
			break;
		case 1:
			cout << "6\n";
			break;
		case 2:
			cout << "5\n";
			break;
		case 3:
			cout << "4\n";
			break;
		case 4:
			cout << "3\n";
			break;
		case 5:
			cout << "2\n";
			break;
		case 6:
			cout << "1\n";
			break;
		}

	}
}