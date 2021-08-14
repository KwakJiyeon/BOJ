#include <iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int N = 0;
	cin >> N;

	int sum = 0;

	for (int i = 1; i < N; i++) {
		sum += i;
	}

	for (int i = 0; i < N; i++) {
		int num = 0;
		cin >> num;
		sum -= num;
	}

	cout << -sum;

}