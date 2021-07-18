#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
vector <int> num;

bool isPrime(int p) {
	if (p < 2) {
		return false;
	}
	double sq = sqrt(p);
	for (int i = 2; i <= sq; i++) {
		if (p % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int N;
	int a;
	cin >> N;
	while (N--) {
		cin >> a;
		num.push_back(a);
	}
	int count = 0;
	for (int i = 0; i < num.size(); i++) {
		if (isPrime(num[i])) {
			count++;
		}
	}
	cout << count;
}
