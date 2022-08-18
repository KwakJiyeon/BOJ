#include <iostream>
#include <vector>
using namespace std;

int main() {

	int n;
	cin >> n;

	vector<int> v;
	int a;

	for (int i = 0; i < n; i++) {
		cin >> a;
		v.push_back(a);
	}

	long long data1 = v[n - 1];
	long long data2 = 1;
	long long tmp = 0;

	for (int i = n-2; i >= 0; i--) {
		tmp = data1;
		data1 = (v[i] * data1) + data2;
		data2 = tmp;
	}

	long long answer = data1 - data2;

	cout << answer<<' '<< data1;
}