#include <iostream>
using namespace std;

int main() {
	int testNum = 0;
	cin >> testNum; //�׽�Ʈ���̽� �� �Է�

	for (int i = 0; i < testNum; i++) { //�׽�Ʈ �� ��ŭ for�� ����
		int dataNum = 0;
		cin >> dataNum; // ���� ��ŭ�� �� �Է�

		int answer = 0;

		for (int j = 0; j < dataNum; j++) { // ���ϴ� ������ ������ŭ for�� ����
			int data = 0;
			cin >> data; // ���� ���� �Է�
			answer = answer + data; // ���� ���ϱ�
		}

		cout << answer << endl; // ���� ���
	}
}
