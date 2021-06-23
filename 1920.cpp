//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//vector <long long> arr;
//long long k;
//
//bool finder(long long a) {
//	int low = 0;
//	int high = arr.size()-1;
//	while (low <= high) {
//		int mid = (high + low) / 2;
//		if (arr[mid] > a) {
//			high = mid - 1;
//		}
//		else if (arr[mid] < a) {
//			low = mid + 1;
//		}
//		if (arr[mid] == a) {
//			return true;
//		}
//	}
//	return false;
//	
//}
//
//int main() {
//	cin.tie(0);
//	ios::sync_with_stdio(false);
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> k;
//		arr.push_back(k);
//	}
//	sort(arr.begin(), arr.end());
//	int num;
//	cin >> num;
//	for (int i = 0; i < num; i++) {
//		cin >> k;
//		cout << finder(k) << "\n";
//	}
//
//}