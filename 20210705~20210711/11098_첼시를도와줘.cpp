#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	int n = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int p = 0;
		cin >> p;

		vector<pair<long, string>> v;

		for (int j = 0; j < p; j++) {
			long c = 0;
			string name = "";
			cin >> c >> name;

			v.push_back({ c,name });
		}
		sort(v.begin(), v.end(), greater<>());
		cout << v[0].second << "\n";
	}
	
}