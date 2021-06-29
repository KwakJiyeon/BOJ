#include <iostream>
#include <queue>
using namespace std;

int main() {
	
	int testNum = 0;
	cin >> testNum;

	for (int i = 0; i < testNum; i++) {
		int dataNum = 0;
		cin >> dataNum;
		int m = 0;
		cin >> m;

		queue<pair<int,int>> q;
		priority_queue<int> pq;

		for (int j = 0; j<dataNum; j++) {
			int data = 0;
			cin >> data;
			q.push({ j, data });
			pq.push(data);
		}

		int answer = 0;

		while (!q.empty()) {
			int index = q.front().first;
			int value = q.front().second;
			q.pop();
			if (pq.top() == value) {
				answer++;
				pq.pop();
				if (index == m) {
					cout << answer << endl;
					break;
				}
			}
			else {
				q.push({ index, value });
			}
		}
	}
	
}



