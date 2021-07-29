#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

vector<int> vec;
int score[310];


int getMaxScore(int x) {

	int max_score = 0;
	if (x == 0)return 0;
	if (score[x] != 0) return score[x];
	if (x - 2 >= 0) { 

		max_score = getMaxScore(x - 2) + vec[x];
		
	
	}
	if (x - 3 >= 0) {
		max_score = max(max_score, getMaxScore(x - 3)+ vec[x-1]+ vec[x]);
		
	}


	score[x] = max_score;
	return max_score;

}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin >> T;
	int ans = T;
	int a;
	vec.push_back(0);
	while (T--) {
		cin >> a;
		vec.push_back(a);
	}
	score[1] = vec[1];
	score[2] = vec[1] + vec[2];
	cout << getMaxScore(ans) << "\n";

}
