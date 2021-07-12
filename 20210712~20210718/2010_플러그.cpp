#include <iostream>
using namespace std;

int main() {

	int N = 0;
	cin >> N;

	int answer = 0;
	int count = 0;
	cin >> count;

	answer = count;

	for (int i = 1; i < N; i++) {
		cin >> count;
		answer--; // 멀티탭을 꽂을 기존 플러그 수 하나 감소
		answer = answer + count; // 자신의 플러그 수 추가
	}
	
	cout << answer;
}