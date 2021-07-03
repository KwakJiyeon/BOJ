#include <iostream>
#include <vector>
using namespace std;

int main() {

	string st = "";
	cin >> st;

	int answer = 0;
	char dir = '(';

	for (int i = 0; i < st.size(); i++) {
		if (i == 0) {
			answer = answer + 10;
			if (st[i] == '(') {
				dir = '(';
			}
			else {
				dir = ')';
			}
		}
		else {
			if (st[i] == dir) {
				answer = answer + 5;
				dir = st[i];
			}
			else {
				answer = answer + 10;
				dir = st[i];
			}
		}
	}
	cout << answer;
	

}