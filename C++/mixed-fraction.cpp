#include<bits/stdc++.h>
using namespace std;

int main() {
	freopen("mixin.txt", "r", stdin);
	freopen("mixout.txt", "w", stdout);

	int n, d;
	cin >> n >> d;
	int div = n / d;
	int rem = n % d;

	if (rem == 0) {
		cout << div << endl;
	}
	else {
		cout<< div << " " << rem << "/" << d << endl;
	}
	return 0;
}

