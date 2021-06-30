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
		if (data == 0) { // 0입력 받으면 가장 최근에 넣은 수를 지운다.
			v.pop_back();
		}
		else {
			v.push_back(data); // 0이 아닌 경우 입력 받은 수 넣음.
		}
		
	}

	for (int i = 0; i < v.size(); i++) {
		answer = answer + v[i];
	}

	cout << answer;
	
}