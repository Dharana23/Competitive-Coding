#include<bits/stdc++.h>
using namespace std;

void solve(int tar, int* arr, int n) {
	int start=0, end=0;
	int sum=arr[0];
	while(start<n && end<n) {
		if(sum < tar) {
			end++;
			sum += arr[end];
		}
		else if(sum > tar) {
			sum -= arr[start];
			start++;
		}
		else {
			cout << "true" << endl;
			for(int i=start; i<=end; i++) {
				cout << arr[i] << " ";
			}
			return;
		}
	}
	cout << "false" << endl;
}
int main() {
	int n, tar;
	cin >> n >> tar;
	int* arr = new int[n];
	for(int i=0; i<n; i++) {
		cin >> arr[i];
	}
	solve(tar, arr, n);
}