#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	int T = 0;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int J = 0;
		int N = 0;
		cin >> J >> N;

		vector<int> v;

		for (int i = 0; i < N; i++) {
			int R = 0;
			int C = 0;
			cin >> R >> C;
			v.push_back(R * C);
		}

		sort(v.begin(), v.end());
		int count = 0;

		for (int j = v.size() - 1; j >= 0; j--) {
			if (J <= 0) {
				break;
			}
			else {
				J = J - v[j];
				count++;
			}
		}
		cout << count << "\n";
	}

}