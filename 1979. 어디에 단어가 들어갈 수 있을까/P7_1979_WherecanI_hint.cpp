#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	freopen_s(new FILE*, "test.txt", "r", stdin);
	int test_case;
	int T;
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int N, K;
		int availableNum = 0;
		int room[15][15] = { 0 };
		//int **room = { 0, }; �������迭 �б� ����

		cin >> N >> K;

		//�迭�� �� �Է�
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				cin >> room[i][j];
			}
		}

		// check horizontal(��ĭ�� 1)=>���� ã��
		for (int i = 0; i < N; i++) {
			int buffer = 0;
			int s_num = 0;
			for (int j = 0; j < N; j++) {
				//i���� j�� 1�� ���(��ĭ)
				if (room[i][j] == 1) {
					buffer++;//���� 1��
				}
				else {//j�� 0�� ���
					//���ۼ� = ã�� ĭ ��(K)�̸�
					if (buffer == K) {
						s_num++;//s_num 1��
					}
					buffer = 0; //���� �ʱ�ȭ
				}
			}
			//�� �߰� �������� ������ ���۰� K ���ϰ��(��ĭ�� �������� ���) �ջ�
			if (buffer == K) {
				s_num++;
			}
			//���� ���� �� ���ϱ� ���� availableNum�� �� �߰�
			availableNum += s_num;
		}

		// check vertical => ����ã��
		for (int j = 0; j < N; j++) {
			int buffer = 0;
			int s_num = 0;
			//j������ �� i�� ��ĭ�� ���
			for (int i = 0; i < N; i++) {
				if (room[i][j] == 1) {
					buffer++;//���� 1��
				}
				else {//���� 0�� �� ���ۼ��� ã�� ĭ ���̸�
					if (buffer == K) {
						s_num++;//s_num 1��
					}
					buffer = 0;//���� �ʱ�ȭ
				}
			}
			//�� �߰� �������� ������ ���۰� K ���ϰ��(��ĭ�� �������� ���) �ջ�
			if (buffer == K) {
				s_num++;
			}
			//���� ���� �� ���ϱ� ���� availableNum�� �� �߰�
			availableNum += s_num;
		}

		//���̽� 1�� ���� -> ���� �� ��� "#1 3"
		cout << "#" << test_case << " " << availableNum << endl;

		// ����, ���� �� �ִ� ��
		//int n = 5;

		// ���, ������ �ʴ� ��
		// const int n = 5;

		// �迭�� ������ ���ǰ� �ȵ�
		//2���� �迭 ����
		//int **room;
		//int arr[5];

		// 0��° ������
		// arr[0]
		// 0��° �ּ�
		// arr

		// 1��° ������
		// arr[1]
		// 1��° �ּ�
		// arr+1

		// 1��° �ּҿ� �ִ� ������
		// *(arr+1)

		// 0��° �ּҿ� �ִ� ������ + 1
		// *(arr)+1

		// new �����ڷ� �����Ҵ��� �ؾߵ�

	}
	
	return 0;//��������� 0�� ����.
}