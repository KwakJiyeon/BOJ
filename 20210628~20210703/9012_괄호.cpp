#include <iostream>
#include <vector>
using namespace std;

int main() {
	
	int count = 0;
	cin >> count;
	int cc = 0; // 중복해서 NO가 출력되는 것을 방지하기 위한 변수.

	for (int i = 0; i < count; i++) {
		vector<string> v;

		string st = "";
		cin >> st;
		for (int j = 0; j < st.size(); j++) {
			if (st[j] == '(') {
				v.push_back("(");
			}
			else {
				if (v.empty()) {
					cc = 1;
					cout << "NO"<<"\n";
					break;
				}
				v.pop_back();
			}
		}
		
		if (v.empty()&&cc!=1) {
			cout << "YES" << "\n";
		}
		else if(cc!=1) {
			cout << "NO" << "\n";
		}
		cc = 0;
	}
	
	
}