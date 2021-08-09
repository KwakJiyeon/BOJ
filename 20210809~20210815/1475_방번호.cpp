#include <iostream>
#include<string>
using namespace std;

int main() {

	int N = 0;
	cin >> N;

	string st = to_string(N);
	int arr[10] = { 0,0,0,0,0,0,0,0,0,0 };

	int max = 0;

	for (int i = 0; i < st.size(); i++) {
		int index = st[i] - 48;
		arr[index] = arr[index] + 1;
	}

	for (int i = 0; i < 10; i++) {
		int tmp = arr[i];

		if (i == 6 || i == 9) {

			tmp = arr[6] + arr[9];

			if (tmp % 2 == 0) {
				tmp = tmp / 2;
			}
			else {
				tmp = (tmp / 2) + 1;
			}
		}

		if (max < tmp) {
			max = tmp;
		}
	}

	cout << max;

}