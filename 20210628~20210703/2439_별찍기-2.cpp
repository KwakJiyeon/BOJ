#include <iostream>
using namespace std;

int main() {
	int N = 0;
	cin >> N;

	for (int i = 1; i <= N; i++) {

		for (int j = N; j > i; j--) { // 공백 출력
			cout << " ";
		}

		for (int j = 1; j <= i; j++) { // 별 출력
			cout << "*";
		}
		cout << endl;
	}

}



