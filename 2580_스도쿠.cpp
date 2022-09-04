#include <iostream>
#include <vector>
#include <string>
using namespace std;

int map[9][9];
int cnt;
bool answer = false;
vector<pair<int,int>> v;

bool check(pair<int,int> xy) {
	int x = xy.first / 3;
	int y = xy.second / 3;

	for (int i = 0; i < 9; i++) {
		if (map[xy.first][i] == map[xy.first][xy.second] && i != xy.second) {
			return false;
		}
		if(map[i][xy.second] == map[xy.first][xy.second] && i != xy.first) {
			return false;
		}
	}

	for (int i = x * 3; i < x * 3 + 3; i++) {
		for (int j = y * 3; j < y * 3 + 3; j++) {
			if (map[i][j] == map[xy.first][xy.second]) {
				if (i != xy.first && j != xy.second) {
					return false;
				}
			}
		}
	}

	return true;
}

void sudoku(int n) {
	if (n == cnt) {
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++) {
				cout << map[i][j] << ' ';
			}
			cout << '\n';
		}
		answer = true;
		return;
	}

	for (int i = 1; i < 10; i++) {
		map[v[n].first][v[n].second] = i;
		if (check(v[n])) {
			sudoku(n + 1);
		}
		if (answer) {
			return;
		}
	}
	map[v[n].first][v[n].second] = 0;
	return;
}


int main() {

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> map[i][j];
		}
	}
	
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (map[i][j] == 0){
				pair<int, int> xy;
				xy.first = i;
				xy.second = j;
				v.push_back(xy);
				cnt++;
			}
		}
	}

	sudoku(0);
}