#include <iostream>
#include <vector>
using namespace std;

int main() {

	string S = "";
	cin >> S;

	int one = 0;
	int zero = 0;
	int tmp = -1;

	for (int i = 0; i < S.size(); i++) {
		if (S[i] == '0' && tmp != 0) {
			tmp = 0;
			zero++;
		}
		else if (S[i] == '1' && tmp != 1) {
			tmp = 1;
			one++;
		}
	}

	if (one < zero) {
		cout << one;
	}
	else {
		cout << zero;
	}

}