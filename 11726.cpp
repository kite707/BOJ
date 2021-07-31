#include <iostream>
using namespace std;

int arr[1001];

int solution(int x) {
	if (arr[x] != 0) return arr[x];
	if (x <= 2) {
		arr[x] = x;
		return x;
	}
	arr[x] = (solution(x - 1) + solution(x - 2)) % 10007;
	return arr[x];

}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	cout << solution(n);
}
