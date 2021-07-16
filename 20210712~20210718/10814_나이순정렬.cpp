#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, string> a, pair<int, string> b) {
	return a.first < b.first;
}

int main() {

	vector<pair<int,string>> v;
	
	int N = 0;
	cin >> N;

	for (int i = 0; i < N; i++) {
		int old = 0;
		string name = "";
		cin >> old >> name;
		v.push_back({ old,name });
	}
	
	stable_sort(v.begin(), v.end(), compare);

	for (int i = 0; i < N; i++) {
		cout << v[i].first << " " << v[i].second << "\n";
	}
}