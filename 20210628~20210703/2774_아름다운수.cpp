#include <iostream>
#include <vector>
using namespace std;

int main() {

	int T = 0;
	cin >> T;

	for (int i = 0; i < T; i++) {
		string st = "";
		cin >> st;

		vector<int> v;
		vector<int> v2;
		int answer = 0;

		for (int i = 0; i < 10; i++) {
			v.push_back('0');
		}

		for (int j = 0; j < st.size(); j++) {
			v2.push_back(int(st[j])-48);// char은 아스키코드 48부터 시작하므로 48을 빼준다.
		}

		for (int j = 0; j < 10; j++) {
			for (int k = 0; k < v2.size(); k++) {
				if (v2[k]==j) {
					v[j] = 1;
				}
			}
		}
		for (int j = 0; j < v.size(); j++) {
			if (v[j] == 1) {
				answer++;
			}
		}
		cout << answer << "\n";
	}

}

