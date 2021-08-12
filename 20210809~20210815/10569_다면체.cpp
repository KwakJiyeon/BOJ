#include <iostream>
using namespace std;

int main() {

	int T = 0;
	cin >> T;

	for (int i = 1; i <= T; i++) {
		int V, E;
		cin >> V >> E;

		cout << E - V + 2 << "\n";
	}

}