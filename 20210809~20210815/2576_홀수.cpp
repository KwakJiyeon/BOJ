#include <iostream>
using namespace std;

int main() {

	int sum = 0;
	int min = 100;

	for (int i = 0; i < 7; i++) {
		int num = 0;
		cin >> num;

		if (num % 2 != 0) {
			sum += num;

			if (min > num) {
				min = num;
			}
		}

	}

	if (sum == 0) {
		cout << -1;
		return 0;
	}

	cout << sum << "\n";
	cout << min;
}