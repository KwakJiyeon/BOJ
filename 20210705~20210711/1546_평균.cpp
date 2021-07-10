#include <iostream>
#include <vector>
using namespace std;

int main() {

	
	int N = 0;
	cin >> N;

	vector<double> v;
	double max = 0;

	for (int i = 0; i < N; i++) {
		
		double score = 0;
		cin >> score;
		if (score > max) {
			max = score;
		}
		v.push_back(score);
	}

	double average = 0;
	cout.precision(8);
	for (int i = 0; i < v.size(); i++) {
		average = average + ((v[i] / max) * 100);
	}
	average = average / v.size();
	cout.precision(4);
	cout << average;

}