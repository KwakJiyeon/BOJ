#include <iostream>
using namespace std;

int main() {

	int N = 0;
	int X = 0;
	cin >> N >> X;

	for (int i = 0; i < N; i++) {
		int A = 0;
		cin >> A;
		if (A < X) {
			cout << A << " ";
		}
	}
}

