#include <iostream>
using namespace std;

int main() {

	int A = 0;
	int B = 0;
	int C = 0;

	cin >> A >> B >> C;

	cout << (A + B) % C << "\n";
	cout << ((A % C) + (B % C)) % C << "\n";
	cout << (A * B) % C << "\n";
	cout << ((A % C) * (B % C)) % C;

}