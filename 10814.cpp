#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define P pair<int,string>

bool compare(pair<int, string> x, pair<int, string> y)
{
	return x.first < y.first;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	vector<P> v;

	int N;
	cin >> N;
	int age;
	string name;
	while (N--) {
		cin >> age >> name;
		v.push_back(P(age, name));
	}
	stable_sort(v.begin(), v.end(),compare);
	for (int i = 0; i < v.size(); i++) {
		P cur = v[i];
		cout << cur.first << " " << cur.second << "\n";
	}

}
