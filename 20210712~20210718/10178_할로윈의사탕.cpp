#include <iostream>
using namespace std;

int main() {

	int T = 0;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int candy = 0;
		int bro = 0;
		cin >> candy >> bro;

		cout << "You get " << candy / bro << " piece(s) and your dad gets " << candy % bro << " piece(s)." << "\n";
	}
}