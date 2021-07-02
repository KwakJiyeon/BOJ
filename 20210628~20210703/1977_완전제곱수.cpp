#include <iostream>
#include <vector>
using namespace std;

int main() {

	int M = 0;
	int N = 0;
	cin >> M >> N;

	vector<int> v;
	int answer = 0;

	for (int i = 1; i <= 10000; i++) {
		if ((i * i) > N) {
			break; // N보다 커지면 반복문 탈출.
		}
		else {
			if (M <= (i * i) && (i * i) <= N) {
				v.push_back(i * i);
				answer = answer + (i * i);
			}
		}
	}
	if (v.empty()) { // 완전제곱수가 존재하지 않으면 -1을 출력.
		cout << -1;
	}
	else {
		cout << answer << "\n" << v[0];
	}
}