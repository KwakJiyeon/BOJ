#include <vector>
#include <cstring>
#include <algorithm>
#include <iostream>

using namespace std;

int w;
int h;
int v[51][51];
bool visit[51][51];
int dx[8] = { 0,1,0,-1,-1,1,1 ,-1 };
int dy[8] = { 1,0,-1,0 ,1,1,-1,-1 };


void dfs(int x,int y) {
	visit[x][y] = true;
	for (int i = 0; i < 8; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (visit[nx][ny]==true||nx<0||ny<0||nx>w||ny>h||v[nx][ny]!=1) {
			continue;
		}
		else {
			dfs(nx, ny);
		}
	}
}

int main() {
	

	 while(1) {

		 cin >> w >> h;
		 
		 if (w == 0 && h == 0) {
			 break;
		 }

		memset(v, 0, sizeof(v));
		memset(visit, false, sizeof(visit));

		for (int j = 0; j < h; j++) {
			for (int k = 0; k < w; k++) {
				int a = 0;
				cin >> a;
				if (a == 0) {
					v[k][j] == 0;
				}
				else {
					v[k][j] = 1;
				}
			}
		}

		int count = 0;

		for (int j = 0; j < w; j++) {
			for (int k = 0; k < h; k++) {
				if (v[j][k] == 1&&visit[j][k]!=true) {
					count++;
					dfs(j, k);
				}
			}
		}
		cout << count << "\n";
	 }
}