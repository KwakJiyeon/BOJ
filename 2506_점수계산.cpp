#include <iostream>
using namespace std;

int main() {

	int N = 0;
	cin >> N;

	int score = 0;
	int answer = 0;

	for (int i = 0; i < N; i++) {
		int test = 0;
		cin >> test;

		if (test == 1) {
			score++;
			answer = answer + score;
		}
		else {
			score = 0;
		}
	}
	cout << answer;
}