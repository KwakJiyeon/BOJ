#include <iostream>
#include <string>
using namespace std;

int main() {

	char arr[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };

	string st = "";
	getline(cin, st);

	string key = "";
	cin >> key;

	for (int i = 0; i < st.size(); i++) {
		if (st[i] == ' ') {
			cout << " ";
		}
		else {
			int index = (st[i] - 97) - (key[i % key.size()] - 97)-1;
			if (index < 0) {
				index = (26 + (st[i] - 97)) - (key[i % key.size()] - 97)-1;
			}
			cout << arr[index];
		}
		
	}
}