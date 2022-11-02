#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
using namespace std;

vector<pair<int,vector<char>>> v2;

int isp = 0;
int r = 0;


int main() {
	
	string S;
	getline(cin, S);

	int j = 0;
	vector<char> v;

	for (int i = 0; i < S.size(); i++) {

		if (S[i] == '<') {
			if (v.size() > 0) {
				while (v.size() > 0) {
					char a = v.back();
					cout << a;
					v.pop_back();
				}
			}
			isp = 1;
			cout << '<';
		}
		else if (S[i] == '>') {
			isp = 0;

			cout << '>';
		}
		else if (S[i] == ' ') {
			if (isp == 0) {
				if (v.size() > 0) {
					while (v.size() > 0) {
						char a = v.back();
						cout << a;
						v.pop_back();
					}
				}
				cout << ' ';
			}
			else {
				if (v.size() > 0) {
					while (v.size() > 0) {
						char a = v.back();
						cout << a;
						v.pop_back();
					}
				}
				cout << ' ';
			}
		}
		else if (isp == 1) {
			cout << S[i];
		}
		else {
			v.push_back(S[i]);
		}

	}

	if (v.size() > 0) {
		while (v.size() > 0) {
			char a = v.back();
			cout << a;
			v.pop_back();
		}
	}

}