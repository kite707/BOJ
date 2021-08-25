#include <iostream>
using namespace std;

int arr[129][129];
int blue, white;
int N,a;

void cut(int x, int y, int size) {
	int cur = arr[x][y];
	bool checker = false;

	for (int i = x; i < x+size; i++) {
		for (int j = y; j < y + size; j++) {
			if (cur == 0 && arr[i][j] == 1) {
				checker = true;
			}
			else if (cur == 1 && arr[i][j] == 0) {
				checker = true;
			}
			if (checker) {
				cut(x, y,size / 2);
				cut(x+size/2, y, size / 2);
				cut(x, y + size / 2, size / 2);
				cut(x + size / 2, y + size / 2, size / 2);
				return;
			}
		}
	}
	if (cur == 1)blue++;
	else white++;
}


int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> a;
			arr[i][j] = a;
		}
	}

	cut(0, 0, N);
	cout << white << '\n';
	cout << blue << '\n';



}
