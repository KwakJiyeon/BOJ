#include <iostream>
using namespace std;

int main() {

	int answer = 0;

	for (int i = 0; i < 8; i++) {
		string st = "";
		cin >> st;
		for (int j = 0; j < st.size(); j++) {
			if ((i % 2 == 0) && (j % 2 == 0)) {
				if (st[j] == 'F') {
					answer++;
				}
			}
			if ((i % 2 != 0) && (j % 2 != 0)) {
				if (st[j] == 'F') {
					answer++;
				}
			}
		}
	}

	cout << answer;
	
}

