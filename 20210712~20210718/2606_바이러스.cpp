#include <iostream>
#include <vector>
using namespace std;

vector<int> computer[101];
bool visit[101];
int cnt = 0;

void dfs(int a) {
	visit[a] = true;
	for (int i = 0; i < computer[a].size(); i++) {
		int b = computer[a][i];
		if (!visit[b]) {
			dfs(b);
			cnt++;
		}
	}
}

int main() {

	int n = 0;
	int m = 0;
	cin >> n >> m;
	
	for (int i = 0; i < m; i++) {
		int u = 0;
		int v = 0;
		cin >> u >> v;
		computer[u].push_back(v);
		computer[v].push_back(u);
	}

	dfs(1);
	cout << cnt;

}