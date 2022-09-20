#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
	
	int N;
	cin >> N;

	vector<pair<int,int>> v;
	int ans = 0;

	for (int i = 0; i < N; i++) {
		int a, b;
		cin >> a >> b;
		pair<int, int> p = { b,a };
		v.push_back(p);
	}

	sort(v.begin(), v.end());

	int j = 0;

	for (int i = 0; i < N; i++) {
		if (v[i].second >= j) {
			ans++;
			j = v[i].first;
		}
	}

	cout << ans;
}