#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	vector<string> v;
	vector<string> answer;

	int N = 0;
	int M = 0;
	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		string name = "";
		cin >> name;
		v.push_back(name);
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < M; i++) {
		string name;
		cin >> name;
		if (binary_search(v.begin(), v.end(), name)) {
			answer.push_back(name);
		}
	}

	sort(answer.begin(), answer.end());

	cout << answer.size() << "\n";

	for (int i = 0; i < answer.size(); i++) {
		cout << answer[i] << "\n";
	}

}