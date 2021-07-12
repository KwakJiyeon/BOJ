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
		q.pop(); // �� �� ī�� ����
		int top = q.front();
		q.pop();
		q.push(top); // �� ���� ī�� �� �Ʒ��� �ű�
	}
	cout << q.front();
}