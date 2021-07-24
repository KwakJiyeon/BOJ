#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	vector<int> v1;
	vector<int> v2;

	for (int i = 0; i < 10; i++) {
		int score = 0;
		cin >> score;
		v1.push_back(score);
	}
	for (int i = 0; i < 10; i++) {
		int score = 0;
		cin >> score;
		v2.push_back(score);
	}
	sort(v1.begin(), v1.end(), greater<>());
	sort(v2.begin(), v2.end(), greater<>());

	int W = 0;
	int K = 0;

	for (int i = 0; i < 3; i++) {
		W = W + v1[i];
		K = K + v2[i];
	}
	cout << W << " " << K;
}