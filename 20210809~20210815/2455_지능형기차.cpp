#include <iostream>
using namespace std;


int main() {

	int max = 0;
	int tmp = 0;

	for (int i = 0; i < 4; i++) {
		int a, b;
		cin >> a >> b;

		tmp -= a;
		tmp += b;

		if (max < tmp) {
			max = tmp;
		}
	}

	cout << max;
}