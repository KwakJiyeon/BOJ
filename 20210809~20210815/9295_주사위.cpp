#include <iostream>
using namespace std;

int main() {

	int T = 0;
	cin >> T;

	for (int i = 1; i <= T; i++) {
		int a, b;
		cin >> a >> b;

		cout << "Case " << i << ": " << a + b << "\n";
	}

}