#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int T = 0;
	cin >> T;

	for (int i = 0; i < T; i++) {
		vector<int> A;
		for (int j = 0; j < 10; j++) {
			int data = 0;
			cin >> data;
			A.push_back(data);
		}
		sort(A.begin(), A.end(),greater<>());
		cout << A[2] << "\n";
	}
}