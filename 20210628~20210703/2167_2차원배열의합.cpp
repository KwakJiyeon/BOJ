#include <iostream>
#include <vector>
using namespace std;

int main() {

	int N = 0;
	int M = 0;
	cin >> N >> M;

	vector<vector<int>> v;

	for (int i = 0; i < N; i++) {

		vector<int> tmp;

		for (int j = 0; j < M; j++) {
			int data = 0;
			cin >> data;
			tmp.push_back(data);
		}

		v.push_back(tmp);
	}

	int count = 0;
	cin >> count;

	for (int k = 0; k < count; k++) {
		int i = 0;
		int j = 0;
		int x = 0;
		int y = 0;
		cin >> i >> j >> x >> y;

		// 배열이 0번째부터 존재하므로 입력받은 값에서 1씩 감소시켜준다.
		i--; 
		j--;
		x--;
		y--;

		int answer = 0;

		for (int q = i; q <= x; q++) { 
			for (int w = j; w <= y; w++) {
				answer = answer + v[q][w];
			}
		}
		cout << answer << "\n";
	}
}