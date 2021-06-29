#include <iostream>
#include <queue>
using namespace std;

int main() {
	
	int testNum = 0;
	cin >> testNum;

	for (int i = 0; i < testNum; i++) {
		int storeNum = 0;
		cin >> storeNum;
		int min =99;
		int max = 0;
		for (int j = 0; j < storeNum; j++) {
			int stores = 0;
			cin >> stores;
			if (stores < min) {
				min = stores;
			}
			if (stores > max) {
				max = stores;
			}
		}
		cout << 2 * (max - min) << endl;
	}
	
}



