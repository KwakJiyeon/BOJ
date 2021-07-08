#include <iostream>
using namespace std;

int main() {

	int T = 0;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int a = 0;
		int b = 0;
		cin >> a >> b;
		int answer = 1;

		for (int j = 0; j < b; j++) {
			answer = (answer * a) % 10;
		}
		if (answer == 0) {
			cout << 10 << "\n";
		}
		else {
			cout << answer << "\n";
		}
	}
}