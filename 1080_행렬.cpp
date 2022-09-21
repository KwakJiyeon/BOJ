#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, M;
int arr[50][50];
int arr2[50][50];
int d[50][50];

void r(int i, int j) {
	for (int k = 0; k < 3; k++) {
		for (int q = 0; q < 3; q++) {
			if (arr[i + k][j + q] == 1) {
				arr[i + k][j + q] = 0;
				if (arr[i + k][j + q] == arr2[i + k][j + q]) {
					d[i + k][j + q] = 1;
				}
				else {
					d[i + k][j + q] = 0;
				}
			}
			else {
				arr[i + k][j + q] = 1;
				if (arr[i + k][j + q] ==arr2[i + k][j + q]) {
					d[i + k][j + q] = 1;
				}
				else {
					d[i + k][j + q] = 0;
				}
			}
		}
	}
}


int main() {
	
	cin >> N >> M;
	int ans = 0;
	int p = 0;

	for (int i = 0; i < N; i++) {
		string st;
		cin >> st;
		for (int j = 0; j < M; j++) {
			arr[i][j] = st[j] - '0';
		}
	}

	for (int i = 0; i < N; i++) {
		string st;
		cin >> st;
		for (int j = 0; j < M; j++) {
			arr2[i][j] = st[j] - '0';
			if (arr2[i][j] == arr[i][j]) {
				d[i][j] = 1;
			}
			else {
				d[i][j] = 0;
			}
		}
	}
	
	for (int i = 0; i < N; i++) {	
		for (int j = 0; j < M; j++) {
			if (d[i][j] == 0&&i<=N-3&&j<=M-3) {
				r(i, j);
				ans++;
			}
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (d[i][j] == 0) {
				p = 1;
			}
		}
	}

	if (p == 0) {
		cout << ans;
	}

	else {
		cout << -1;
	}
	
}