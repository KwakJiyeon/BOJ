#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, M;
bool check[9];
vector<int> v2;
vector<int> v;

void f(int i) {

	if (i == M) {
		for (int j = 0; j < M; j++) {
			cout << v[j] << ' ';
		}
		cout << "\n";
		return;
	}

	for (int j = 0; j < N; j++) {
		if (check[j]) {
			continue;
		}
		check[j] = true;
		v.push_back(v2[j]);
		f(i + 1);
		check[j] = false;
		v.pop_back();
		
	}
	
}

int main() {

	cin >> N >> M;
	int data = 0;
	for (int i = 0; i < N; i++) {
		cin >> data;
		v2.push_back(data);
	}
	sort(v2.begin(),v2.end());
	f(0);
	
	return 0;

}