#include <iostream>
using namespace std;

int main() {

	int N = 0;
	cin >> N;

	char a = 0;
	int sum = 0;

	for (int i = 0; i < N; i++) {
		cin >> a;
		sum = sum + (a-'0'); // '0'�� ���� intŸ������ ��ȯ.
	}
	cout << sum;
}