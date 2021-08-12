#include <iostream>
using namespace std;

int arr[31][2];

int main() {

	int D, K;
	cin >> D >> K;

	arr[1][0] = 1;
	arr[2][1] = 1;

	for (int i = 3; i < 31; i++) {
		arr[i][0] = arr[i - 2][0] + arr[i - 1][0];
		arr[i][1] = arr[i - 2][1] + arr[i - 1][1];
	}

	for (int i = 1; i < 100000; i++) {
		for (int j = 1; j < 100000; j++) {
			if (i * arr[D][0] + j * arr[D][1] == K) {
				cout << i << "\n" << j;
				return 0;
			}
		}
	}
}