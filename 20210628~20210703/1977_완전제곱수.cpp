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
			break; // N���� Ŀ���� �ݺ��� Ż��.
		}
		else {
			if (M <= (i * i) && (i * i) <= N) {
				v.push_back(i * i);
				answer = answer + (i * i);
			}
		}
	}
	if (v.empty()) { // ������������ �������� ������ -1�� ���.
		cout << -1;
	}
	else {
		cout << answer << "\n" << v[0];
	}
}