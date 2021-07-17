#include <iostream>
#include <string>
using namespace std;

int main() {
	int A = 0;
	int B = 0;
	int C = 0;
	cin >> A >> B >> C;

	int D = A * B * C;
	string st = to_string(D);

	int arr[10] = { 0, };

	for (int i = 0; i < st.size(); i++) {
		arr[st[i]-'0']++;
	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << "\n";
	}
}