#include <iostream>
using namespace std;

int main() {

	int H = 0;
	int M = 0;
	cin >> H >> M;

	
	if (M - 45 < 0) {
		M = 60 - (45 - M);
		if (H == 0) {
			H = 23;
		}
		else {
			H--;
		}
	}
	else {
		M = M - 45;
	}
	
	cout << H << " " << M;
}

