#include <iostream>
using namespace std;

int main() {

	int arr[5] = { 0, };

	for (int i = 0; i < 5; i++) {
		int sum = 0;
		for (int j = 0; j < 4; j++) {
			int score = 0;
			cin >> score;
			sum += score;
		}
		arr[i] = sum;
	}

	int winner = 0;
	int max = 0;

	for (int i = 0; i < 5; i++) {
		if (max < arr[i]) {
			max = arr[i];
			winner = i + 1;
		}
	}
	cout << winner << " " << max;
}