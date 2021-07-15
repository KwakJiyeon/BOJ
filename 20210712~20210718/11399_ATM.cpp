#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	vector<int> v;

	int N = 0;
	cin >> N;

	for (int i = 0; i < N; i++) {
		int P = 0;
		cin >> P;
		v.push_back(P);
	}
	sort(v.begin(), v.end());

	int tmp = 0;
	int answer = 0;

	for (int i = 0; i < N; i++) {
		tmp = tmp + v[i];
		answer = answer + tmp;
	}
	cout << answer;

}