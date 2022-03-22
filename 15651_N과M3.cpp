#include <iostream>
#include <vector>
using namespace std;

int N, M;

vector<int> v;

void f(int i) {

	if (i == M) {
		for (int j = 0; j < M; j++) {
			cout << v[j] << ' ';
		}
		cout << "\n";
		return;
	}

	for (int j = 1; j <= N; j++) {
		
		v.push_back(j);
		f(i + 1);
		v.pop_back();
		
	}
	
}

int main() {

	cin >> N >> M;
	f(0);
	
	return 0;

}