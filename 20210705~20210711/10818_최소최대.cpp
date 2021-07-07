#include <iostream>
using namespace std;

int main() {

	int N = 0;
	cin >> N;

	int min = 1000000;
	int max = -10000000;

	for (int i = 0; i < N; i++) {
		int data = 0;
		cin >> data;

		if (data < min) {
			min = data;
		}
		if (data > max) {
			max = data;
		}
	}
	cout << min << " " << max;
}

