#include <iostream>
#include <queue>
using namespace std;

int main() {

	int N = 0;
	cin >> N;

	queue<int> q;

	for (int i = 1; i <= N; i++) {
		q.push(i);
	}

	while (q.size() > 1) {
		q.pop(); // 맨 위 카드 버림
		int top = q.front();
		q.pop();
		q.push(top); // 그 다음 카드 맨 아래로 옮김
	}
	cout << q.front();
}