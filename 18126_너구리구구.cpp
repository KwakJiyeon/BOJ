#include <iostream>
using namespace std;

int N;
long long map[5001][5001];
bool visited[5001];
long long m = 0;

void DFS(int v,long long dis) {

	visited[v] = true;

	for (int i = 1; i < N + 1; i++) {
		if (map[v][i] != 0 && visited[i] == 0) {
			
			DFS(i, dis + map[v][i]);
		}
	}

	if (m < dis) {
		m = dis;
	}
	
}


int main() {
	
	cin >> N;

	for (int i = 0; i <= N; i++) {
		for (int j = 0; j <= N; j++) {
			map[i][j] = 0;
			map[j][i] = 0;
		}
		visited[i] = 0;
	}

	for (int i = 0; i < N - 1; i++) {
		long long a, b, c;
		cin >> a >> b >> c;
		map[a][b] = c;
		map[b][a] = c;
	}
	
	DFS(1,0);

	cout << m;
}