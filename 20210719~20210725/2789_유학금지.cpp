#include <iostream>
using namespace std;

int main() {

	string st = "";
	cin >> st;

	char ar[9] = { 'C','A','M','B','R','I','D','G','E' };

	for (int i = 0; i < st.size(); i++) {

		bool check = true;

		for (int j = 0; j < 9; j++) {
			if (st[i]==ar[j]) {
				check = false;
			}
		}

		if (check) {
			cout << st[i];
		}
	}
	
}