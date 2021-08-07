#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int a, b;
	cin >> a >> b;
	string ss;

	vector<string> listen;
	vector<string> see;

	vector<string>answer;

	while (a--) {
		cin >> ss;
		listen.push_back(ss);
	}
	while (b--) {
		cin >> ss;
		see.push_back(ss);
	}

	sort(listen.begin(), listen.end());
	sort(see.begin(), see.end());

	int ans = 0;

	for (int i = 0; i < listen.size(); i++) {
		if(binary_search(see.begin(),see.end(),listen[i])) {
			ans++;
			answer.push_back(listen[i]);
		}
		
	}
	cout << ans << "\n";
	for (int i = 0; i < answer.size(); i++) {
		cout << answer[i] << "\n";
	}

}
