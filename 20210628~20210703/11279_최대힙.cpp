#include <iostream>
#include <queue>
using namespace std;

int main() {

	cin.sync_with_stdio(false); // cin, cout �� ����� �� ���� �ð��� �ٿ��ش�.
	cin.tie(NULL);
	cout.tie(NULL);

	priority_queue<int> pq;
	int N = 0;
	cin >> N;

	for (int i = 0; i < N; i++) {
		int x = 0;
		cin >> x;

		if (x == 0) {
			if (pq.empty()) {
				cout << 0 << "\n";
			}
			else {
				cout << pq.top() << "\n";
				pq.pop();
			}
			
		}
		else {
			pq.push(x);
		}
	}
}