#include <iostream>
#include <vector>
using namespace std;

vector<int> graph[102];
int n;
int visit[102];

int dis(pair<int,int> a, pair<int,int> b) {
	return  abs(a.first - b.first) + abs(a.second - b.second);
}

void dfs(int node) {
	visit[node] = 1;

	for (int i = 0; i < graph[node].size(); i++){
		int next = graph[node][i];
		if (visit[next] == 0) {
			dfs(next);
		}
	}
}

int main() {

	int t = 0;
	cin >> t;

	for (int i = 0; i < t; i++) {
		for (int j = 0; j < 102; j++) {
			graph[j].clear();
			visit[j] = 0;
		}

		cin >> n;
		vector<pair<int, int>> v;

		for (int j = 0; j < n+2; j++) {
			int x, y;
			cin >> x >> y;
			v.push_back({ x,y });
		}

		for (int j = 0; j < n + 2; j++) {
			for (int k = 0; k < n + 2; k++) {
				if (dis(v[j], v[k]) <= 1000) {
					graph[j].push_back(k);
					graph[k].push_back(j);
				}
			}
		}

		dfs(0);

		if (visit[n + 1] == 1) {
			cout << "happy" << "\n";
		}
		else {
			cout << "sad" << "\n";
		}
	}
}