#include <iostream>
using namespace std;

int main() {
	
	int N = 0;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		for (int j = N; j > i; j--) {
			cout << " ";
		}
		for (int j = 0; j < i; j++) {
			cout << "*";
		}
		cout << "\n";
	}
	for (int i = 1; i < N; i++) {
		for (int j = 0; j < i; j++) {
			cout << " ";
		}
		for (int j = N; j > i; j--) {
			cout << "*";
		}
		cout << "\n";
	}
}

