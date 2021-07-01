#include <iostream>
#include <vector>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); // ����� ���� �ð� ����
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
				v[k] = !v[k]; // �ش� ������ ����� ������ ��� ���¸� ������Ŵ.
			}
		}

		int answer = 0;

		for (int j = 1; j <= n; j++) {
			answer = answer + v[j];
		}

		cout << answer<<"\n";

	}
}