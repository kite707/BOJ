#include <iostream>
#include <vector>
using namespace std;

int checker[6000];
int input[6000];
vector <int>v;
int main() {

	int a, b;
	cin >> a >> b;
	for (int i = 1; i <= a; i++) {
		input[i] = i;
	}
	for (int i = 0; i < 6000; i++) {
		checker[i] = 0;
	}
	int idx = 0;
	int erasenum = 0;
	while (erasenum != a) {
		
		for (int i = 0; i < b; i++) {
			idx++;
			if (idx > a) {
				idx = idx % a;
			}
			if (checker[idx] == 1) {
				idx++;
				if (idx > a) {
					idx = idx % a;
				}
			}
		}
		checker[idx] = 1;
		v.push_back(input[idx]);
		erasenum++;
	}
	cout << "<";
	for (int i = 0; i < a - 1; i++) {
		cout << v[i] << ", ";
	}
	cout << v[a - 1];
	cout << ">";
}