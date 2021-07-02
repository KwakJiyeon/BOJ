#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N = 0;
	cin >> N;

	vector<int> v; 
	vector<int> v2; // 소수이면 0, 소수가 아니면 1이 들어갈 것이다.

	int answer = 0;

	for (int i = 0; i < N; i++) {
		int data = 0;
		cin >> data;
		v.push_back(data);
		v2.push_back(0); // 초기값은 0으로 설정.
	}
	for (int i = 0; i < N; i++) {
		for (int j = 2; j <v[i]; j++) {
			if (v[i] % j == 0) { // 약수가 있다면 1을 넣어 소수가 아님을 알림.
				v2[i] = 1;
			}
		}
	}
	for (int i = 0; i < N; i++) {
		if (v2[i] == 0&&v[i]!=1) { // 약수가 없거나 1이 아니라면 소수의 개수 증가.
			answer++;
		}
	}
	cout << answer;
}