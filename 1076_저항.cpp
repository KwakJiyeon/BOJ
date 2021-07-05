#include <iostream>
using namespace std;

int main() {
	string color[10] = { "black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white" };
	int colors[3];
	string st = "";

	for (int i = 0; i < 3; i++) {
		cin >> st;
		for (int j = 0; j < 10; ++j) {
			if (color[j] == st) {
				colors[i] = j;
			}
		}
	}

	long long answer = colors[0] * 10 + colors[1];

	for (int i = 0; i < colors[2]; i++) {
		answer = answer * 10;
	}
	cout << answer;
}

