#include <iostream>
using namespace std;

int main() {

	int N = 0;
	cin >> N;

	int answer = 0;
	int count = 0;
	cin >> count;

	answer = count;

	for (int i = 1; i < N; i++) {
		cin >> count;
		answer--; // ��Ƽ���� ���� ���� �÷��� �� �ϳ� ����
		answer = answer + count; // �ڽ��� �÷��� �� �߰�
	}
	
	cout << answer;
}