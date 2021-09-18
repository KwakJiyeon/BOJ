#include <iostream>
#include <vector>
using namespace std;

int N, M;
int map[8][8];
int cMap[8][8];
int dx[4]{ 0,1,0,-1 }; 
int dy[4]{ 1,0,-1,0 };
int ans = 100;

void copyMap()
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cMap[j][i] = map[j][i];
		}
	}
}
void countMin() {

	int ct = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (cMap[j][i] == 0) {
				ct++;
			}
		}
	}
	if (ct < ans) {
		ans = ct;
	}
}

struct cctv {
	int kind, x, y;
};

vector<cctv> v;
vector<int> dir;

void check(int x, int y,int d) {

	int cx = x;
	int cy = y;

	while (0 <= cx&& cx < M && 0 <= cy&& cy < N) {
		if (map[cx][cy] == 6) {
			break;
		}
		cMap[cx][cy] = 7;
		cx += dx[d];
		cy += dy[d];
	}
	
}

void solve(int ok) {

	if (ok == v.size()) {

		copyMap();

		for (int i = 0; i < v.size(); i++) {
			if (v[i].kind == 1) {
				check(v[i].x, v[i].y, dir[i]);
			}
			else if (v[i].kind == 2) {
				check(v[i].x, v[i].y, dir[i]);
				check(v[i].x, v[i].y, (dir[i] + 2) % 4);
			}
			else if (v[i].kind == 3) {
				check(v[i].x, v[i].y, dir[i]);
				check(v[i].x, v[i].y, (dir[i] + 1) % 4);
			}
			else if (v[i].kind == 4) {
				check(v[i].x, v[i].y, dir[i]);
				check(v[i].x, v[i].y, (dir[i] + 1) % 4);
				check(v[i].x, v[i].y, (dir[i] + 2) % 4);
			}
			else if (v[i].kind == 5) {
				check(v[i].x, v[i].y, dir[i]);
				check(v[i].x, v[i].y, (dir[i] + 1) % 4);
				check(v[i].x, v[i].y, (dir[i] + 2) % 4);
				check(v[i].x, v[i].y, (dir[i] + 3) % 4);
			}
		}
		countMin();
		return;
	}
	for (int i = 0; i < 4; i++) {
		dir[ok] = i;
		solve(ok + 1);
	}
}

int main() {

	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			int data = 0;
			cin >> data;
			map[j][i] = data;

			if (0<data&&data<6) {
				v.push_back({ data, j, i });
				dir.push_back(0);
			}

		}
	}
	
	solve(0);
	cout <<ans;
}