#include <iostream>
#include <queue>
using namespace std;

int N, M, V;
int map[1001][1001];
bool visited[1001];
queue<int> q;

void DFS(int v) {

	visited[v] = true;
	cout << v << ' ';

	for (int i = 1; i < N + 1; i++) {
		if (map[v][i] == 1 && visited[i] == 0) {
			DFS(i);
		}
	}
}

void BFS(int v) {
	q.push(v);
	visited[v] = true;
	cout << v << ' ';

	while (!q.empty()) {

		v = q.front();
		q.pop();

		for (int i = 1; i < N + 1; i++) {
			if (map[v][i] == 1 && visited[i] == 0) { 
				q.push(i);
				visited[i] = true;
				cout << i << ' ';
			}
		}
	}

}

int main() {

	cin >> N >> M >> V;

	for (int i = 0; i < M; i++) {
		int a, b;
		cin >> a >> b;
		
		map[a][b] = 1;
		map[b][a] = 1;
	}

	for (int i = 1; i < N + 1; i++) {
		visited[i] = 0;
	}

	DFS(V);

	cout << '\n';

	for (int i = 1; i < N + 1; i++) {
		visited[i] = 0;
	}

	BFS(V);

	return 0;
}