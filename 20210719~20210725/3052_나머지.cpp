#include <iostream>
using namespace std;

int main() {

	int arr[42] = { 0, };

	for (int i = 0; i < 10; i++) {
		int data = 0;
		cin >> data;
		arr[data % 42] = 1;
	}

	int count = 0;

	for (int i = 0; i < 42; i++) {
		if (arr[i] == 1) {
			count++;
		}
	}

	cout << count;
}
