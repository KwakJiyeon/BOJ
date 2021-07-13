#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	vector<int> v;
	int sum = 0;

	int a = 0;
	int b = 0;

	for (int i = 0; i < 9; i++) {
		int height = 0;
		cin >> height;
		v.push_back(height);
		sum = sum + height;
	}

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if ((sum - (v[i]+v[j])) == 100) {
				a = v[i];
				b = v[j];
				break;
			}
		}
		if (a != 0&&a!=b) {
			break;
		}
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < 9; i++) {
		if (v[i] != a && v[i] != b) {
			cout << v[i] << "\n";
		}
	}

}