#include <iostream>
using namespace std;

int main() {

	string st = "";
	cin >> st;

	int count = 0;

	for (int i = 0; i < st.size(); i++) {
		if (st[i] == 'a' || st[i] == 'e' || st[i] == 'i' || st[i] == 'o' || st[i] == 'u') {
			count++;
		}
	}

	cout << count;

}