#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	int N = 0;
	cin >> N;

	vector<int> v;

	for (int i = 0; i < N; i++) {
		int data = 0;
		cin >> data;
		v.push_back(data);
	}
	sort(v.begin(), v.end()); //오름차순 정렬
	cout << v[0] * v[v.size() - 1]; // 첫번째 약수 * 마지막 약수
}

