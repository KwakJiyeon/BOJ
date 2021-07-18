#include <vector>
#include <cstring>
#include <algorithm>
#include <iostream>

using namespace std;

int N, M;
int v[51][51];
bool visit[51][51];
int dy[4] = { 1,0,-1,0 };
int dx[4] = { 0,1,0,-1 };


void dfs(int x,int y) {
	visit[x][y] = true;
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (visit[nx][ny]==true||nx<0||ny<0||nx>M||ny>N||v[nx][ny]!=1) {
			continue;
		}
		else {
			dfs(nx, ny);
		}
	}
}

int main() {
	int T = 0;
	cin >> T;

	for (int i = 0; i < T; i++) {

		cin >> M >> N;
		int K = 0;
		cin >> K;

		memset(v, 0, sizeof(v));
		memset(visit, false, sizeof(visit));

		for (int j = 0; j < K; j++) {
			int x = 0;
			int y = 0;
			cin >> x >> y;
			v[x][y] = 1;
		}
		int count = 0;

		for (int j = 0; j < M; j++) {
			for (int k = 0; k < N; k++) {
				if (v[j][k] == 1&&visit[j][k]!=true) {
					count++;
					dfs(j, k);
				}
			}
		}
		cout << count << "\n";
	}
}