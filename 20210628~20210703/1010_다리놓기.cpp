#include <iostream>
#include <vector>
using namespace std;

int main() {

	int T = 0;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int N = 0;
		int M = 0;
		cin >> N >> M;

		int answer = 1;
		int count = M;

		for (int j = 1; j <= N; j++) {
			answer = answer * count / j;
			count--;
		}
		cout << answer << "\n";
	}
}