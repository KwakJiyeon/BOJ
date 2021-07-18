#include <iostream>
using namespace std;

int arr[3] = { 0, };

int main() {

	for (int i = 0; i < 3; i++) {
		int count = 0;

		for (int j = 0; j < 4; j++) {
			int data = 0;
			cin >> data;
			if (data == 0) {
				count++;
			}
		}
		arr[i] = count;
	}

	for (int i = 0; i < 3; i++) {
		if (arr[i] == 4) {
			cout << "D" << "\n";
		}
		else if (arr[i] == 1) {
			cout << "A" << "\n";
		}
		else if (arr[i] == 2) {
			cout << "B" << "\n";
		}
		else if (arr[i] == 3) {
			cout << "C" << "\n";
		}
		else if (arr[i] == 0) {
			cout << "E" << "\n";
		}
	}
}