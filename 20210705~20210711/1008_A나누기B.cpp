#include <iostream>
using namespace std;

int main() {
	double answer = 0;
	double a = 0;
	double b = 0;

	cin >> a >> b;

	answer = a / b;

	cout.precision(15); // �Ҽ��� �Ʒ� �ڸ��� ����

	cout << answer;
}

