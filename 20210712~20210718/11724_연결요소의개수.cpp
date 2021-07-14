#include <iostream>
#include <vector>
using namespace std;

vector<int> arr[1001];
bool visit[1001];

void dfs(int a) {
	visit[a] = true;
	for (int i = 0; i < arr[a].size(); i++) {
		int b = arr[a][i];
		if (!visit[b]) {
			dfs(b);
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
		arr[u].push_back(v);
		arr[v].push_back(u);
	}

	int count = 0;

	for (int i = 1; i <= n; i++) {
		if (!visit[i]) {
			dfs(i);
			count++;
		}
	}
	cout << count;
}