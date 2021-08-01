#include <iostream>
#include <cstring>
using namespace std;

int arr[11];

int solution(int x) {
	if (x == 1) {
		arr[x] = 1;
		return arr[x];
	}
	if (x == 2) {
		arr[x] = 2;
		return arr[x];
	}
	if (x == 3) {
		arr[x] = 4;
		return arr[x];
	}
	if (arr[x] != 0) {
		return arr[x];
	}
	return solution(x - 1) + solution(x - 2) + solution(x - 3);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T;
	cin >> T;
	int a;
	while (T--) {
		cin >> a;
		cout << solution(a) << "\n";
		memset(arr, 0, sizeof(arr));
	}
}
