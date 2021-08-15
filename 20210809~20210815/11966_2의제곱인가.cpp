#include <iostream>
using namespace std;

int main() {

	int N = 0;
	cin >> N;

	int tmp = 1;

	while (tmp < N) {
		tmp = tmp * 2;
	}

	if (tmp == N) {
		cout << 1;
	}
	else {
		cout << 0;
	}
	
}