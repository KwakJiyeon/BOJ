#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<int> v;
	int answer = 0;

	int A = 0;
	int B = 0;
	cin >> A >> B;

	for (int i = 1; i <= 100; i++) {
		for (int j = 0; j < i; j++) {
			v.push_back(i);
		}
	}
	for (int i = A; i <= B; i++) {
		answer = answer + v[i-1];
	}
	cout << answer;
	
}