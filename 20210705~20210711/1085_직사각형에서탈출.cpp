#include <iostream>
using namespace std;

int main() {
	int nums[4];
	for (int i = 0; i < 4; i++) {
		int data = 0;
		cin >> data;
		nums[i] = data;
	}
	int a = nums[2] - nums[0]; // w - x
	int b = nums[3] - nums[1]; // h - y

	if (a > nums[0]) {
		a = nums[0];
	}
	if (b > nums[1]) {
		b = nums[1];
	}
	if (a > b) {
		cout << b;
	}
	else {
		cout << a;
	}
	
}

