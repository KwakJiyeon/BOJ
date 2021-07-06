#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	cin.sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);

	int T = 0;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int dir = 4; // 4╩С 3аб 2го 1©Л
		vector<int> v1;
		vector<int> v2;
		v1.push_back(0);
		v2.push_back(0);
		int x = 0;
		int y = 0;
		string order = "";
		cin >> order;

		for (int j = 0; j < order.size(); j++) {
			if (order[j] == 'F') {
				if (dir%4 == 0) {
					y++;
				}
				else if (dir%4 == 3) {
					x--;
				}
				else if (dir%4 == 2) {
					y--;
				}
				else if (dir%4 == 1) {
					x++;
				}
			}
			else if (order[j] == 'B') {
				if (dir % 4 == 0) {
					y--;
				}
				else if (dir % 4 == 3) {
					x++;
				}
				else if (dir % 4 == 2) {
					y++;
				}
				else if (dir % 4 == 1) {
					x--;
				}
			}
			else if (order[j] == 'L') {
				dir--;
				if (dir == 0) {
					dir = 4;
				}
			}
			else if (order[j] == 'R') {
				dir++;
			}
			v1.push_back(x);
			v2.push_back(y);
		}

		sort(v1.begin(), v1.end());
		sort(v2.begin(), v2.end());
		
		cout << (v1[v1.size()-1]-v1[0])*(v2[v2.size() - 1] - v2[0])<<"\n";
		
	}
	
}

