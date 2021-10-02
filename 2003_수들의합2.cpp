#include <iostream>
#include <queue>
using namespace std;

int main() {

	int N, M;

	cin >> N >> M;

	queue<int> q;
	queue<int> q2;
	int plus = 0;
	int count = 0;

	for (int i = 0; i < N; i++) {
		int data = 0;
		cin >> data;
		q.push(data);
	}

	for (int i = 0; i < N; i++) {
		if (q.front() == NULL) {
			break;
		}

		q2.push(q.front());
		plus += q.front();

		if (plus > M) {
			while (plus > M) {
				plus -= q2.front();
				q2.pop();
			}
		}
		
		if (plus == M) {
			plus -= q2.front();
			count++;
			q2.pop();
		}

		q.pop();
	}

	cout << count;
}