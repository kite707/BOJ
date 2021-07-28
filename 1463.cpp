#include <iostream>
using namespace std;
int arr[1000001];

int init = 0;

int number(int x) {
	if (x == 1) {
		return 0;
	}
	if (arr[x] != 0) {
		return arr[x];
	}

	int res= 1 + number(x - 1);
	if (x % 3 == 0) res = min(res, 1 + number(x / 3));
	if (x % 2 == 0) res = min(res, 1 + number(x / 2));
	arr[x] = res;
	return res;
	

}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	arr[2] = 1;
	arr[3] = 1;
	cin >> init;

	cout << number(init);


}
