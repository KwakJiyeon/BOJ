#include <iostream>
using namespace std;

int main() {

	int count = 1;
	int sum = 64;
	int cut = 64;
	int X = 0;
	cin >> X;

	while (sum>X) {

		cut = cut / 2;
		if (sum - cut >= X) {
			sum = sum - cut;
		}
		else {
			count++;
		}
		
	}
	cout << count;
}