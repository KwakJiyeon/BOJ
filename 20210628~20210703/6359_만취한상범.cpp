#include <iostream>
#include <vector>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); // 입출력 연산 시간 감소
	cin.tie(NULL);
	cout.tie(NULL);

	int test = 0;
	cin >> test;

	for (int i = 0; i < test; i++) {
		int n = 0;
		cin >> n;

		vector<bool> v(n+1,false);

		for (int j = 1; j <= n; j++) {
			for (int k = 0; k <= n; k=k + j) {
				v[k] = !v[k]; // 해당 라운드의 배수인 감방의 잠금 상태를 반전시킴.
			}
		}

		int answer = 0;

		for (int j = 1; j <= n; j++) {
			answer = answer + v[j];
		}

		cout << answer<<"\n";

	}
}