#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	int n = 0;
	cin >> n;

	vector<pair<pair<int,int>,pair<int,string>>> v(n);

	for (int i = 0; i < n; i++) {
		string name = ""; // �̸�
		int dd = 0; // ��
		int mm = 0; // ��
		int yyyy = 0; // ��
		cin >> name >> dd >> mm >> yyyy;

		v[i].first.first = yyyy;
		v[i].first.second = mm;
		v[i].second.first = dd;
		v[i].second.second = name;
	}
	sort(v.begin(), v.end()); // �������� ����
	cout << v[n - 1].second.second << "\n" << v[0].second.second << "\n";
}