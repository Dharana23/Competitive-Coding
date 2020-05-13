#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[n];

	for(int i=0; i<n; i++) {
		cin >> arr[i];
	}

	int even_sum = 0;
	int odd_sum = 0;
	for(int i=0; i<n; i++) {
		if ((arr[i] % 2) == 0) {
			if((i % 2) == 0) {
				even_sum += arr[i];
			}
		}
		else {
			if((i % 2) != 0) {
				odd_sum += arr[i];
			}
		}
	}
	cout << even_sum << " " << odd_sum;
	return 0;
}