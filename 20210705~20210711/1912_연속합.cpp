#include <iostream>
using namespace std;

int main() {

	int n = 0;
	cin >> n;

	int DP[100001];
	int max = -1001;

	for (int i = 1; i <= n; i++) {
		cin >> DP[i];
		if (DP[i] < DP[i] + DP[i - 1]) {
			DP[i] = DP[i] + DP[i - 1];
		}
		if (max < DP[i]) {
			max = DP[i];
		}
	}
	cout << max;
}