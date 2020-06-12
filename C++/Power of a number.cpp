#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int x, n, result = 1;
    cin >> x >> n;
    
    while(n != 0) {
        result *= x;
        --n;
    }
    
    cout << result;
    return 0;
}
