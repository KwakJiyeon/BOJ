#include <iostream>
#include<string>
using namespace std;

int main() {

	int T = 0;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int N = 0;
		int M = 0;
		cin >> N >> M;

		int count = 0;

		for (int j = N; j <= M; j++) {
			string st = to_string(j);
			for (int k = 0; k < st.size(); k++) {
				if (st[k] == '0') {
					count++;
				}
			}
		}

		cout << count << "\n";
	}

}