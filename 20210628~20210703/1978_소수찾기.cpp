#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N = 0;
	cin >> N;

	vector<int> v; 
	vector<int> v2; // �Ҽ��̸� 0, �Ҽ��� �ƴϸ� 1�� �� ���̴�.

	int answer = 0;

	for (int i = 0; i < N; i++) {
		int data = 0;
		cin >> data;
		v.push_back(data);
		v2.push_back(0); // �ʱⰪ�� 0���� ����.
	}
	for (int i = 0; i < N; i++) {
		for (int j = 2; j <v[i]; j++) {
			if (v[i] % j == 0) { // ����� �ִٸ� 1�� �־� �Ҽ��� �ƴ��� �˸�.
				v2[i] = 1;
			}
		}
	}
	for (int i = 0; i < N; i++) {
		if (v2[i] == 0&&v[i]!=1) { // ����� ���ų� 1�� �ƴ϶�� �Ҽ��� ���� ����.
			answer++;
		}
	}
	cout << answer;
}