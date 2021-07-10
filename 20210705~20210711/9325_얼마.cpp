#include <iostream>
using namespace std;

int main() {

	
	int T = 0;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int answer = 0;

		int car = 0;
		cin >> car;

		answer = answer + car;

		int n = 0;
		cin >> n;

		for (int j = 0; j < n; j++) {
			int option_num = 0;
			cin >> option_num;

			int option_price = 0;
			cin >> option_price;

			answer = answer + (option_num * option_price);
		}

		cout << answer << "\n";

	}

}