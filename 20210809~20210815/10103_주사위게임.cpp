#include <iostream>
using namespace std;

int main() {

	int n = 0;
	cin >> n;

	int p1 = 100; // â������ ����
	int p2 = 100; // ������� ����

	for (int i = 0; i < n; i++) {
		int s1, s2;
		cin >> s1 >> s2;

		if (s1 > s2) {
			p2 -= s1;
		}
		else if (s1 < s2) {
			p1 -= s2;
		}
	}

	cout << p1 << "\n" << p2;

}