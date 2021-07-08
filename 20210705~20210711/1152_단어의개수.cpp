#include <iostream>
#include <string>
using namespace std;

int main() {

	string st = "";
	getline(cin,st);

	int answer = 0;
	int space = 1;
	
	for (int i = 0; i < st.size(); i++) {
		if (st[i] == ' ') {
			space = 1;
		}
		else if (space == 1) {
			space = 0;
			answer++;
		}
	}
	cout << answer;
}