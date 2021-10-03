#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
int board[20][20];

int dfs(int idx) {

	if (idx == 5) {
		int b = 0;

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				b = max(b, board[i][j]);
			}
		}
		return b;

	}

	int b;

	for (int i = 0; i < 4; i++) {

		int temp[20][20];

		for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++) {
				temp[j][k] = board[j][k];
			}
		}

		for (int q = 0; q < n; q++) {

			vector<int> temp;

			for (int p = 0; p < n; p++) {
				if ((i < 2 ? board[q][p] : board[p][q]) != 0)
					temp.push_back(i < 2 ? board[q][p] : board[p][q]);
			}

			if (i == 1 || i == 3) {
				reverse(temp.begin(), temp.end());
			}

			vector<int> perm;

			for (int p = 0; p < temp.size(); p++) {

				if (p + 1 < temp.size() && temp[p] == temp[p + 1]) {
					perm.push_back(temp[p] * 2);
					p++;
				}

				else {
					perm.push_back(temp[p]);
				}
			}

			for (int p = perm.size(); p < n; p++) {
				perm.push_back(0);
			}

			if (i == 1 || i == 3) {
				reverse(perm.begin(), perm.end());
			}
			
			for (int p = 0; p < n; p++) {
				(i < 2 ? board[q][p] : board[p][q]) = perm[p];
			}
		}

		b = max(b, dfs(idx + 1));

		for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++) {
				board[j][k] = temp[j][k];
			}
		}

	}

	return b;

}

int main() {

	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> board[i][j];
		}
	}

	cout << dfs(0);
	
}