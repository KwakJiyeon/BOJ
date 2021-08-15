#include <iostream>
using namespace std;

int main() {

	int N = 0;
	cin >> N;

	int sum = 1;

	for (int i = 1; i <= N; i++) {
		sum = sum * i;
	}

	cout << sum;

}