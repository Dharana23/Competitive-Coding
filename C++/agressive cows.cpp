#include<bits/stdc++.h>
using namespace std;

bool check(int cows, int positions[], int n, int distance) {
	int count = 1;
	int last_position = positions[0];
	for(int i=1; i<n; i++) {
		if(positions[i]-last_position >= distance) {
			last_position = positions[i];
			count++;
		}
		if(count == cows) {
			return true;
		}
	}
	return false;
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, c;
		cin >> n >> c;

		int positions[n];
		for(int i=0; i<n; i++) {
			cin >> positions[i];
		}
		sort(positions, positions+n);
		int start = 0;
		int end = positions[n-1] - positions[0];

		int ans = -1;
		while(start <= end) {
			int mid = start + (end-start)/2;

			if(check(c, positions, n, mid)) {
				ans = mid;
				start = mid + 1;
			}
			else{
				end = mid - 1;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
