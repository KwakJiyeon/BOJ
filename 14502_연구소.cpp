#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, M;
vector<pair<int,int>> safe;
int visit[8][8];
int c_visit[8][8];
int dy[4]{ 1,-1,0,0 };
int dx[4]{ 0,0,-1,1 };
int ans = 0;

void dfs(int x,int y) {

	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (c_visit[nx][ny] == 0 && nx>=0 && ny>=0 && nx<M && ny<N) {
			c_visit[nx][ny] = 2;
			dfs(nx, ny);
		}
	}
}

void copy_visit()
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			c_visit[j][i] = visit[j][i];
		}
	}
}

void countMax() {
	int ct = 0;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (c_visit[j][i] == 0) {
				ct++;
			}
		}
	}

	if (ct > ans) {
		ans = ct;
	}
}


int main() {

	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			int data = 0;
			cin >> data;
			if (data == 0) {
				safe.push_back({ j,i });
			}
			visit[j][i] = data;

		}
	}
	
	for (int i = 0; i < safe.size()-2; i++) {
		for (int j = i + 1; j < safe.size() - 1; j++) {
			for (int k = j + 1; k < safe.size(); k++) {
				pair<int, int> one = safe[i];
				pair<int, int> two = safe[j];
				pair<int, int> three = safe[k];

				copy_visit();

				c_visit[one.first][one.second] = 1;
				c_visit[two.first][two.second] = 1;
				c_visit[three.first][three.second] = 1;

				for (int r = 0; r < N; r++) {
					for (int p = 0; p < M; p++) {
						if (c_visit[p][r] == 2)
							dfs(p, r);
					}
				}

				countMax();
			}
		}
	}


	cout <<ans;
}