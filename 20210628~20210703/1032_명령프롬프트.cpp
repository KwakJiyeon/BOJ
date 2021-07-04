#include <iostream>
#include <vector>
using namespace std;

int main() {

	int N = 0;
	cin >> N;

	vector<string> v;
	int a = 0;

	for (int i = 0; i < N; i++) {
		string st = "";
		cin >> st;
		v.push_back(st);
	}
	for (int i = 0; i < v[0].size(); i++) {
		a = 0;
		for (int j = 0; j < N; j++) {
			if (v[0][i] != v[j][i]) {
				a = 1;
				cout << "?";
				break;
			}
		}
		if (a == 0) {
			cout << v[0][i];
		}
	}
}

