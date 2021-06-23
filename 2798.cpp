//#include <iostream>
//using namespace std;
//
//int arr[200];
//int j;
//int sum;
//int change;
//
//int ans;
//int onchange = 1000000;
//int main() {
//	int n, m;
//	cin >> n >> m;
//
//	for (int i = 0; i < n; i++) {
//		cin >> j;
//		arr[i] = j;
//	}
//	for (int i = 0; i < n - 2; i++) {
//		for (int k = i + 1; k < n-1; k++) {
//			for (int p = k + 1; p < n; p++) {
//				sum = arr[i] + arr[k] + arr[p];
//				if (sum <= m) {
//					change = m - sum;
//					if (change < onchange) {
//						onchange = change;
//						ans = sum;
//					}
//				}
//				
//			}
//
//		}
//	}
//	cout << ans;
//}