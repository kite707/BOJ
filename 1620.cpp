#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#define P pair<string,int>
using namespace std;

string arr[100001];
vector<P> vec;

bool isNumber(string str) {
	for (auto k : str) {
		if (isdigit(k) == false) {
			return false;
		}
	}
	return true;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N, M;
	cin >> N >> M;
	vec.push_back(P("", 0));
	for (int i = 1; i <= N; i++) {
		string name;
		cin >> name;
		arr[i] = name;
		vec.push_back(P(name, i));
	}

	sort(vec.begin(), vec.end());
	



	string question;
	for (int i = 0; i < M; i++) {
		cin >> question;
		//입력값이 숫자면, 해당 인덱스에 있는 값 가져옴
		if (isNumber(question)) {
			int num = atoi(question.c_str());
			cout << arr[num] << "\n";
		}
		else {
			//입력값이 문자열이면 이진탐색으로 값 찾음(그냥 찾으면 시간초과)
			int low = 1;
			int high = N;
			int mid = (low + high) / 2;
			while (low <= high) {
				mid = (low + high) / 2;
				if (vec[mid].first == question) {
					cout << vec[mid].second << "\n";
					break;
				}
				else if (question > vec[(low + high) / 2].first) {
					low = mid+1;
				}
				else {
					high = mid-1;
				}
			}
			
		}
	}

	
}
