#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int ans[100001];
int checker[100001];
int nums[100001];

int setter(int k) {
	if (checker[k] != 0) {
		return ans[k];
	}
	else {
		if (setter(k - 1) + nums[k] > 0) {
			ans[k] = setter(k - 1) + nums[k];
		}
		else {
			ans[k] = 0;
		}
		checker[k] = 1;
		return ans[k];
		
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int a, b;
	cin >> a;
	bool alltheyminus = true;
	int max = -10000;
	for (int i = 1; i <= a; i++) {
		cin >> b;
		if (b > max) {
			max = b;
		}
		nums[i] = b;
		if (b >= 0) {
			alltheyminus = false;
		}
	}


	if (nums[1] > 0) {
		ans[1] = nums[1];
	}
	else {
		ans[1] = 0;
	}
	checker[1] = 1;

	if (a == 1) {
		cout << nums[1];
	}
	else {
		if (alltheyminus) {
			cout << max;
		}
		else {
			setter(a);
			cout << *max_element(ans, ans + a+1);
		}

	}

}
