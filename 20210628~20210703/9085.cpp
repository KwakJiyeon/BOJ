#include <iostream>
using namespace std;

int main() {
	int testNum = 0;
	cin >> testNum; //테스트케이스 수 입력

	for (int i = 0; i < testNum; i++) { //테스트 할 만큼 for문 동작
		int dataNum = 0;
		cin >> dataNum; // 더할 만큼의 수 입력

		int answer = 0;

		for (int j = 0; j < dataNum; j++) { // 더하는 숫자의 개수만큼 for문 동작
			int data = 0;
			cin >> data; // 더할 숫자 입력
			answer = answer + data; // 숫자 더하기
		}

		cout << answer << endl; // 정답 출력
	}
}
