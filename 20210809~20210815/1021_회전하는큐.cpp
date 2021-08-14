#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main() {

	int N, M;
	cin >> N >> M;

	deque<int> dq;
	vector<int> v;

	int result = 0;

	for (int i = 1; i <= N; i++) {
		dq.push_back(i);
	}

	for (int i = 0; i < M; i++) {
		int num = 0;
		cin >> num;
		v.push_back(num);
	}

	for (int i = 0; i < v.size(); i++) {

		int idx = v[i];
		int cur = 1;

		for (deque<int>::iterator iter = dq.begin(); iter < dq.end(); iter++){

			if (*iter == idx) {
				break;
			}
			cur++;
		}

		int left = cur - 1;
		int right = dq.size() - cur + 1;

		if (left < right) {
			for (int j = 0; j < left; j++) {
				int tmp = dq.front();
				dq.pop_front();
				dq.push_back(tmp);
				result++;
			}
			dq.pop_front();
		}
		else {
			for (int j = 0; j < right; j++) {
				int tmp = dq.back();
				dq.pop_back();
				dq.push_front(tmp);
				result++;
			}
			dq.pop_front();
		}

	}

	cout << result;
}