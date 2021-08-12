#include <iostream>
using namespace std;

int main() {

	int sum = 0;
	cin >> sum;

	for (int i = 0; i < 9; i++) {
		int price = 0;
		cin >> price;
		sum -= price;
	}

	cout << sum;
}