#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	int T = 0;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int N = 0;
		cin >> N;
		vector<int> v;

		for (int j = 0; j < N; j++) {
			int h = 0;
			cin >> h;
			v.push_back(h);
		}
		sort(v.begin(), v.end());
		int answer = 0;

		for (int j = 2; j < N; j++) {
			int tmp = v[j] - v[j - 2];
			answer = max(answer, tmp);
		}
		cout << answer << "\n";
	}
}