#include <iostream>
#include <vector>
using namespace std;

int main() {

	int arr[6] = { 500,100,50,10,5,1 };

	int money = 0;
	cin >> money;

	money = 1000 - money;

	int i = 0;
	int count = 0;

	while (money != 0) {
		if (money == 0) {
			break;
		}
		else if(money - arr[i]>=0) {
			money = money - arr[i];
			count++;
		}
		else {
			i++;
		}
	}

	cout << count;

}