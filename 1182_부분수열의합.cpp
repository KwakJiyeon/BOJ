#include <iostream>
using namespace std;

int N, S;
int arr[20];
int ans = 0;

void f(int k,int sum) {

	sum += arr[k];

	if (k >= N) {
		return;
	}
	if (sum == S) {
		ans++;
	}

	f(k + 1, sum - arr[k]);
	f(k + 1, sum);

}

int main() {

	cin >> N >> S;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	f(0, 0);

	cout << ans << endl;
	return 0;

}