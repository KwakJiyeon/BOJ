#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	vector<int> v;
	
	int N = 0;
	int K = 0;
	cin >> N >> K;

	for (int i = 0; i < N; i++) {
		int coin = 0;
		cin >> coin;
		v.push_back(coin);
	}

	sort(v.begin(), v.end());
	int i = N - 1;
	int count = 0; // 동전의 개수

	while (K != 0) {
		if (K == 0) {
			break;
		}
		else if (K - v[i] >= 0) {
			K = K - v[i];
			count++;
		}
		else {
			i--;
		}
	}

	cout << count;

}