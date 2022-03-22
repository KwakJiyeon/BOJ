#include <iostream>
#include <vector>
using namespace std;

int N, M;
bool check[9];
vector<int> v;

void f(int i) {

	if (i == M) {
		for (int j = 0; j < M; j++) {
			cout << v[j] << ' ';
		}
		cout << "\n";
	}

	for (int j = 1; j <= N; j++) {
		if (check[j]) {
			continue;
		}
		check[j] = true;
		v.push_back(j);
		f(i + 1);
		v.pop_back();
		check[j] = false;
	}
	
}

int main() {

	cin >> N >> M;
	f(0);
	
	return 0;

}