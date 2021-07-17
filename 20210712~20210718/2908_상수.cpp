#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int A = 0;
	int B = 0;
	cin >> A >> B;

	int a1 = A % 10;
	int a2 = (A % 100) / 10;
	int a3 = A / 100;

	int b1 = B % 10;
	int b2 = (B % 100) / 10;
	int b3 = B / 100;
	
	int A2 = (a1 * 100) + (a2 * 10) + (a3);
	int B2 = (b1 * 100) + (b2 * 10) + (b3);

	if (A2 > B2) {
		cout << A2;
	}
	else {
		cout << B2;
	}
}