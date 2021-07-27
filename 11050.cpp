#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	int num = 1;
	int k = 1;
	for (int i = 0; i < b; i++) {
		num=num* (a - i);
	}
	for (int i = 1; i <= b; i++) {
		k = k * i;
	}
	cout << num / k;

}
