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
		//int **room = { 0, }; 이차원배열 읽기 에러

		cin >> N >> K;

		//배열에 값 입력
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				cin >> room[i][j];
			}
		}

		// check horizontal(빈칸이 1)=>가로 찾기
		for (int i = 0; i < N; i++) {
			int buffer = 0;
			int s_num = 0;
			for (int j = 0; j < N; j++) {
				//i고정 j가 1일 경우(빈칸)
				if (room[i][j] == 1) {
					buffer++;//버퍼 1업
				}
				else {//j가 0일 경우
					//버퍼수 = 찾는 칸 수(K)이면
					if (buffer == K) {
						s_num++;//s_num 1업
					}
					buffer = 0; //버퍼 초기화
				}
			}
			//벽 발견 못했으나 끝에서 버퍼가 K 개일경우(빈칸이 끝에있을 경우) 합산
			if (buffer == K) {
				s_num++;
			}
			//가로 세로 합 구하기 위해 availableNum에 값 추가
			availableNum += s_num;
		}

		// check vertical => 세로찾기
		for (int j = 0; j < N; j++) {
			int buffer = 0;
			int s_num = 0;
			//j고정일 때 i가 빈칸인 경우
			for (int i = 0; i < N; i++) {
				if (room[i][j] == 1) {
					buffer++;//버퍼 1업
				}
				else {//값이 0일 때 버퍼수가 찾는 칸 수이면
					if (buffer == K) {
						s_num++;//s_num 1업
					}
					buffer = 0;//버퍼 초기화
				}
			}
			//벽 발견 못했으나 끝에서 버퍼가 K 개일경우(빈칸이 끝에있을 경우) 합산
			if (buffer == K) {
				s_num++;
			}
			//가로 세로 합 구하기 위해 availableNum에 값 추가
			availableNum += s_num;
		}

		//케이스 1개 종료 -> 최종 값 출력 "#1 3"
		cout << "#" << test_case << " " << availableNum << endl;

		// 변수, 변할 수 있는 수
		//int n = 5;

		// 상수, 변하지 않는 수
		// const int n = 5;

		// 배열은 변수로 정의가 안됨
		//2차원 배열 선언
		//int **room;
		//int arr[5];

		// 0번째 데이터
		// arr[0]
		// 0번째 주소
		// arr

		// 1번째 데이터
		// arr[1]
		// 1번째 주소
		// arr+1

		// 1번째 주소에 있는 데이터
		// *(arr+1)

		// 0번째 주소에 있는 데이터 + 1
		// *(arr)+1

		// new 연산자로 동적할당을 해야됨

	}
	
	return 0;//정상종료시 0을 리턴.
}