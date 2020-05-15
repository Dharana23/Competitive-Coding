#include<bits/stdc++.h>
using namespace std;

void profit(int arr[], int n) {
	int minindex = 0;
	int maxprofit = 0;
	int i = 1;

	while(i < n) {
		if(arr[i] < arr[minindex]) {
			minindex = i;
		}
		int cp = arr[i] - arr[minindex];
		if(cp > maxprofit) {
			maxprofit = cp;
		}
		i++;
	}
	cout << maxprofit;
}

int main() {
	int n;
	cin >> n;
	int * arr = new int[n];
	for(int i=0; i<n; i++) {
		cin >> arr[i];
	}
	profit(arr, n);
}