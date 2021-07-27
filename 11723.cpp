#include <iostream>
using namespace std;

int arr[21];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int T;
	cin >> T;
	int a;
	while (T--) {
		string oper;
		cin >> oper;
		if (oper == "add") {
			cin >> a;
			arr[a] = 1;
		}
		else if (oper == "remove") {
			cin >> a;
			arr[a] = 0;
		}
		else if (oper == "check") {
			cin >> a;
			if (arr[a] == 1) {
				cout << 1 << "\n";
			}
			else {
				cout << 0 << "\n";
			}
		}
		else if (oper == "toggle") {
			cin >> a;
			if (arr[a] == 1) {
				arr[a] = 0;
			}
			else {
				arr[a] = 1;
			}
		}
		else if (oper == "all") {
			for (int i = 0; i < 21; i++) {
				arr[i] = 1;
			}
		}
		else if (oper == "empty") {
			for (int i = 0; i < 21; i++) {
				arr[i] = 0;
			}
		}
	}

}
