#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	int N = 0;
	cin >> N;

	vector<int> v;

	for (int i = 0; i < N; i++) {
		int t = 0;
		cin >> t;
		v.push_back(t);
	}

	sort(v.begin(), v.end(),greater<>());

	int answer = 0;

	for (int i = 0; i < N; i++) {
		if (answer < i + v[i]){
			answer = i+v[i];
		}
	}

	cout << answer + 2; // ������ ������ ���� ���ؾ��ϹǷ� +1, ������� ������ �ʴ� �����ϹǷ� +1.
}