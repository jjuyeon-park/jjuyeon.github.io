//study_d1_2 : 1204 �ֺ�� ���ϱ�


#include <iostream>
#include <vector>

using namespace std;

int main() {
	int T;
	int test_case;
	
	freopen_s(new FILE*, "text.txt", "r", stdin);
	cin >> T;
	//vector ����
	//https://dense.tistory.com/entry/cpp-stl-vector
	
	for (test_case = 1; test_case <= T; test_case++)
	{
		int a;
		cin >> a;

		vector<int> v1(101);

		int temp; //����
		int max = v1[0];
		int c = 0;

		for (int i = 0; i < 1000; i++)
		{
			cin >> temp;
			v1[temp] += 1;
		}

		//�ֺ��� v1[j] ã�� j ���
		for (int j = 0; j < 101; j++)
		{
			if (max <= v1[j])
			{
				max = v1[j];
				c = j;
			}

		}
		cout << "#" << test_case << " " << c << "\n";
	
			
		
	}

	return 0;
}