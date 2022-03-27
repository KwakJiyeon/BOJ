#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

	int N;
	cin >> N;
	
	vector<int> v;
	int data = 0;

	for (int i = 0; i < N; i++) {
		cin >> data;
		v.push_back(data);
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < N; i++) {
		cout << v[i] << "\n";
	}

}