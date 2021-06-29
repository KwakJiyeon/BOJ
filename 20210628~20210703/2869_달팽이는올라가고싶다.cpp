#include <iostream>
using namespace std;

int main() {
	int A = 0;
	int B = 0;
	int V = 0;
	cin >> A >> B >> V;

	int answer = 0;

	if ((B - V) % (B - A) == 0) {
		answer = (B - V) / (B - A);
	}
	else {
		answer = (B - V) / (B - A) + 1;
	}

	cout << answer;

}



