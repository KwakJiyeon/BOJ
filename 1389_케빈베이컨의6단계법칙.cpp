#include <iostream>
using namespace std;

int N, M;
int INF = 1000000;
int d[101][101];
int ans[101];

void floyd() {
	for (int k = 0; k < N; k++) {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (d[i][k] + d[k][j] < d[i][j]) {
					d[i][j] = d[i][k] + d[k][j];
				}
			}
		}
	}
}


int main() {

	cin >> N >> M;

	for (int i = 0; i <N; i++) {
		for (int j = 0; j < N; j++) {
			if (i == j) {
				d[i][j] = 0;
			}
			else{
				d[i][j] = INF;
			}
		}
	}

	for (int i = 0; i < M; i++) {
		int a, b;
		cin >> a >> b;
		d[a-1][b-1] = 1;
		d[b-1][a-1] = 1;
	}

	floyd();

	for (int i = 0; i < N; i++) {
		ans[i] = 0;
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			ans[i] = ans[i] + d[i][j];
		}
	}

	int ans2 = 100000;
	int ans3 = 0;

	for (int i = N-1; i >= 0; i--) {
		if (ans2 >= ans[i]) {
			ans2 = ans[i];
			ans3 = i;
		}
	}

	cout << ans3 + 1;

	return 0;
}