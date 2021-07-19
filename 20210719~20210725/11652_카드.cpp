#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	int N = 0;
	cin >> N;

	vector<long long> v;

	for (int i = 0; i < N; i++) {
		long long num = 0;
		cin >> num;
		v.push_back(num);
	}
	sort(v.begin(), v.end());

	long long answer = 0;
	int count = 0;
	int tmp_count = 0;

	for (int i = 0; i < v.size(); i++) {
		tmp_count++;
		if (i == N - 1 || v[i] != v[i + 1]) {
			if (count < tmp_count) {
				answer = v[i];
				count = tmp_count;
			}
			tmp_count = 0;
		}
	}
	cout << answer;
}