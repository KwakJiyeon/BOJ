#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int N, M;
	cin >> N >> M;

	vector<int> v;

	for (int i = 0; i < N + M; i++) {
		int num = 0;
		cin >> num;
		v.push_back(num);
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}

}