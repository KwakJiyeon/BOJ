#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	int N = 0;
	cin >> N;

	vector<int> A; 
	vector<int> B;

	int answer = 0;

	for (int i = 0; i < N; i++) {
		int data = 0;
		cin >> data;
		A.push_back(data);
	}
	for (int i = 0; i < N; i++) {
		int data = 0;
		cin >> data;
		B.push_back(data);
	}

	sort(A.begin(), A.end()); //오름차순 정렬
	sort(B.begin(), B.end(),greater<int>());

	for (int i = 0; i < N; i++) {
		answer = answer + (A[i] * B[i]);
	}
	cout << answer;
}

