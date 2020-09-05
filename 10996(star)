#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		if (N % 2 == 0) {
			for (int i = 1; i <= N / 2 - 1; i++) {
				cout << "* ";
			}
			cout << "*\n";
			for (int i = 1; i <= N / 2; i++) {
				cout << " *";
			}
			cout << "\n";
		}
		if (N % 2 == 1 &&N!=1) {
			for (int i = 1; i <= (N - 1) / 2; i++) {
				cout << "* ";
			}
			cout << "*\n";
			for (int i = 1; i <= (N - 1) / 2; i++) {
				cout << " *";
			}
			cout << "\n";
		}
		if (N == 1) {
			cout << "*";
		}
	}

	return 0;
}
