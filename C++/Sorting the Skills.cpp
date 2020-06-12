#include<bits/stdc++.h>
using namespace std;

bool checksort(int* arr, int n) {
    for(int i=0; i<n-1; i++) {
        if(arr[i] > arr[i+1]) {
            if(arr[i] - arr[i+1] == 1) {
                swap(arr[i], arr[i+1]);
            }
            else {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    for(int i=0; i<t; i++) {
        int n;
        cin >> n;
        int* arr = new int[n];
        for(int i=0; i<n; i++) {
            cin >> arr[i];
        }
        if(checksort(arr,n)) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
}
