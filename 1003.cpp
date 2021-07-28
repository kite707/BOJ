#include <iostream>
using namespace std;

int arr[41];
int fibo(int x) {
	if (x == 0)return 0;
	if (x == 1) return 1;
	if (arr[x] != 0)return arr[x];

	arr[x] = fibo(x - 1) + fibo(x - 2);
	return arr[x];

}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int T;
	cin >> T;
	
	while (T--) {
		
		int a;
		cin >> a;
		if (a == 0) {
			cout << 1 << " ";
		}
		else {
			cout << fibo(a - 1) << " ";
		}
		cout << fibo(a) << "\n";
	}
}
