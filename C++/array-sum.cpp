#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[n][n];

	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			cin >>arr[i][j];
		}
	}

	long sum=0;

	for(int i=0, j=0; i<n; i++, j++) {
		sum += arr[i][j];
	}

	for(int i=0, j=n-1; i<n; i++, j--) {
		sum += arr[i][j];
	}

	for(int i=1; i<n-1; i++) {
		sum += arr[0][i];
		sum += arr[n-1][i];
		sum += arr[i][0];
		sum += arr[i][n-1];
	}

	if((n % 2) != 0) {
		sum -= arr[n/2][n/2];
	}
	cout << sum << endl;

	return 0;
}