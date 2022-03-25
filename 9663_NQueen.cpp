#include <iostream>
using namespace std;

int n;
int arr[15];
int ans;

bool check(int ct) {
	for (int j = 0; j < ct; j++) {
		if (arr[ct] == arr[j] || ct -j == abs(arr[ct] - arr[j])) {
			return 0;
		}
	}
	return 1;
}

void f(int i) {

	if (i == n) {
		ans++;
		return;
	}

	for (int j = 0; j < n; j++) {
		arr[i] = j;
		if (check(i)==1) {
			f(i + 1);
		}
	}
	
}

int main() {

	cin >> n;
	f(0);
	cout << ans;
	
	return 0;

}