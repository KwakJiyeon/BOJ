#include <iostream>
#include <vector>
using namespace std;

int main() {
	
	int count = 0;
	cin >> count;

	vector<int> v;
	int answer = 0;

	for (int i = 0; i < count; i++) {
		int data = 0;
		cin >> data;
		if (data == 0) { // 0�Է� ������ ���� �ֱٿ� ���� ���� �����.
			v.pop_back();
		}
		else {
			v.push_back(data); // 0�� �ƴ� ��� �Է� ���� �� ����.
		}
		
	}

	for (int i = 0; i < v.size(); i++) {
		answer = answer + v[i];
	}

	cout << answer;
	
}