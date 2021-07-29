#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#define P pair<string,string>
using namespace std;

vector<P> vec;
map<string, string> m1;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int M, N;
	
	cin >> M >> N;
	int siz = M;
	string a, b;
	
	while (M--) {
		cin >> a >> b;
		m1.insert(P(a, b));
	}

	while (N--) {
		cin >> a;
		cout << m1[a] << "\n";
		
	}
}
