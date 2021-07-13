#include <iostream>
using namespace std;

int main() {

	int N = 0;
	cin >> N;

	int max = N / 5;
	int sum = 0;

	while (1) {
		if (max < 0) {
			cout << -1;
			return 0;
		}
		if ((N - (5 * max)) % 3 == 0){
			sum = (N - (5 * max)) / 3;
			break;
		}
		max--;
	}
	cout << max + sum;
}