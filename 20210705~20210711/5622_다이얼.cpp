#include <iostream>
using namespace std;

int main() {

	int arr[26] = { 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10 };

	string st = "";
	cin >> st;

	int answer = 0;

	for (int i = 0; i < st.size(); i++) {
		int data = st[i] - 65;
		answer = answer + arr[data];
	}

	cout << answer;
}