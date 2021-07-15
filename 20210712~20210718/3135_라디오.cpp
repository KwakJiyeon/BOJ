#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	int A = 0;
	int B = 0;
	cin >> A >> B;

	int N = 0;
	cin >> N;

	int tmp = 1000;

	for (int i = 0; i < N; i++) {
		int data = 0;
		cin >> data;

		if (B - data >= 0) {
			if (tmp > B - data) {
				tmp = B - data;
			}
		}
		else {
			if (tmp > data - B) {
				tmp = data - B;
			}
		}
	}

	int AB = 0;
	if (B - A >= 0) {
		AB = B - A;
	}
	else {
		AB = A - B;
	}

	if (AB > tmp+1) {
		cout << tmp + 1;
	}
	else {
		cout << AB;
	}

}