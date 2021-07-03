#include <iostream>
using namespace std;

int main() {

	int N = 0;
	cin >> N;

	for (int i = N; i > 1; i--) {

		for (int j = 1; j < i; j++) {
			cout << " ";
		}

		for (int j = 2 * (N - i + 1) - 1; j > 0; j--) {
			cout << "*";
		}

		cout << endl;

	}
	for (int i = 1; i <= N; i++) {

		for (int j = 1; j < i; j++) {
			cout << " ";
		}

		for (int j = 2 * (N - i + 1) - 1; j > 0; j--) {
			cout << "*";
		}

		cout << endl;

	}


}

