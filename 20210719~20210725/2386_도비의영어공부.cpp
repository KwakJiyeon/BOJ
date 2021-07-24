#include <iostream>
#include <string>
using namespace std;

int main() {

	char ch = 0;
	string st = "";

	while (1) {
		int count = 0;

		cin >> ch;

		if (ch == '#') {
			break;
		}

		getline(cin, st);

		for (int i = 0; i < st.size(); i++) {
			if ('A' <= ch && ch <= 'Z') {
				if (st[i] == ch || st[i] == ch + 32) {
					count++;
				}
			}
			else if ('a' <= ch && ch <= 'z') {
				if (st[i] == ch || st[i] == ch - 32) {
					count++;
				}
			}
		}

		cout << ch << " " << count << "\n";
	}
	
}