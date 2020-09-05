#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N, sum;
	int cycle = 0;
	int a = 0;
	int tmp = 0;
	cin >> N;
	tmp = N;
	while (true) {
		sum = tmp / 10 + tmp % 10;
		a = (tmp % 10) * 10 + sum % 10;
		if (N == a) {
			break;
		}
		cycle++;
		tmp = a;
	}
	cout << cycle+1;
	return 0;
}
