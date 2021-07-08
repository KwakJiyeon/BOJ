#include <iostream>
using namespace std;

int main() {

	int A = 0;
	int B = 0;
	

	cin >> A >> B;

	int B1 = B % 10;
	int B2 = B / 10 % 10;
	int B3 = B / 100;

	cout << A * B1 << "\n";
	cout << A * B2 << "\n";
	cout << A * B3 << "\n";
	cout << (B1 * A) + (B2 * 10 * A) + (B3 * 100 * A);
}

