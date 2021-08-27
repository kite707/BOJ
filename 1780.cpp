#include <iostream>
using namespace std;

int mi, ze, pl;

int arr[2188][2188];

void cut(int x, int y, int size) {
	int cur = arr[x][y];

	for (int i = x; i < x + size; i++) {
		for (int j = y; j < y + size; j++) {
			if (cur == 0 && arr[i][j] == -1) {
				cur = 2;
			}
			else if (cur == 0 && arr[i][j] == 1) {
				cur = 2;
			}
			else if (cur == 1 && arr[i][j] == -1) {
				cur = 2;
			}
			else if (cur == 1 && arr[i][j] == 0) {
				cur = 2;
			}
			else if (cur == -1 && arr[i][j] == 0) {
				cur = 2;
			}
			else if (cur == -1 && arr[i][j] == 1) {
				cur = 2;
			}
			if (cur == 2) {
				cut(x, y, size / 3);
				cut(x+ size / 3, y, size / 3);
				cut(x + size * 2 / 3, y, size / 3);
				cut(x , y + size / 3, size / 3);
				cut(x + size / 3, y + size / 3, size / 3);
				cut(x + size*2 / 3, y + size / 3, size / 3);
				cut(x, y + size * 2 / 3, size / 3);
				cut(x + size / 3, y + size * 2 / 3, size / 3);
				cut(x + size * 2 / 3, y + size * 2 / 3, size / 3);
				return;
			}
		}
	}
	if (cur == -1) {
		mi++;
	}
	else if (cur == 1) {
		pl++;
	}
	else {
		ze++;
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int T, K;
	cin >> T;
	for (int i = 0; i < T; i++) {
		for (int j = 0; j < T; j++) {
			cin >> K;
			arr[i][j] = K;
		}
	}
	cut(0, 0, T);
	cout << mi << "\n" << ze << "\n" << pl << "\n";
}
