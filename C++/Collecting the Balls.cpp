#include<iostream>
using namespace std;

bool find(long curr, long k) {
    long sum=0, n=curr;
    while(n > 0) {
        long add = min(k, n);
        sum += add;
        n -= add;
        n -= (n/10);
    }
    return 2*sum >= curr;
}

long bsearch(long n) {
    long ret = n/2, lo = 1, hi = n;
    while(lo <= hi) {
        long mid = (lo+hi) / 2;
        if(find(n, mid)) {
            ret = mid;
            hi = mid - 1;
        }
        else {
            lo = mid + 1;
        }
    }
    return ret;
}

int main() {
    long n;
    cin >> n;
    cout << (bsearch(n));
}
