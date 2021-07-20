#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	vector<pair<int, int>> v;
	vector<int> v2; // 문제 번호 저장

	for (int i = 1; i <= 8; i++) {

		int score = 0;
		cin >> score;
		v.push_back({ score,i });
	}

	sort(v.begin(), v.end());

	int answer = 0;

	for (int i = 3; i <= 7; i++) {
		answer = answer + v[i].first;
		v2.push_back(v[i].second);
	}

	sort(v2.begin(), v2.end());

	cout << answer << "\n";

	for (int i = 0; i < v2.size(); i++) {
		cout << v2[i] << " ";
	}

}