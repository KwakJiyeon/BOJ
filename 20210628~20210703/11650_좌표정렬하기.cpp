#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	
	int count = 0;
	cin >> count;

	vector<pair<int, int>> v;

	for (int i = 0; i < count; i++) {
		int x = 0;
		int y = 0;
		cin >> x >> y;
		v.push_back({ x,y });
	}
	sort(v.begin(),v.end()); // sort로 오름차순 정렬
	for (int i = 0; i < count; i++) {
		cout << v[i].first << " " << v[i].second <<"\n";
	}
	
}