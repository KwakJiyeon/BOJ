#include <iostream>
using namespace std;

int N;
int d[101][101];

void floyd() {
	for (int k = 0; k < N; k++) {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (d[i][k] && d[k][j]) {
					d[i][j] = 1;
				}
			}
		}
	}
}


int main() {

	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			int data;
			cin >> data;

			d[i][j] = data;
		}
	}

	floyd();

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << d[i][j] << ' ';
		}
		cout << '\n';
	}

	return 0;
}