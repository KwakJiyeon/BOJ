#include <iostream>
using namespace std;


int main() {

	string st = "";
	int count = 0;

	cin >> st;

	for (int i = 0; i < st.size(); i++) {
		if (st[i] == ',') {
			count++;
		}
	}

	count++;
	cout << count;
}