#include <iostream>
#include <vector>

using namespace std;
int arr[1001];
int length[1001];

void solution(int idx) {
	int maxlength = 1;
	for (int i = idx - 1; i > 0; i--) {
		if (arr[idx] > arr[i]) {
			if (maxlength <= length[i]) {
				maxlength = length[i];
			}
		}
	}
	length[idx] = maxlength+1;
	
}



int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T;
	cin >> T;
	int a;
	int idx = 0;
	while (T--) {
		cin >> a;
		idx++;
		arr[idx] = a;
		
	}
	length[1] = 1;
	for (int i = 1; i <= idx; i++) {
		solution(i);
	}
	int ans = 0;
	for (int i = 1; i <= idx; i++) {
		ans = max(ans, length[i]);
	}

	cout << ans-1;

}


