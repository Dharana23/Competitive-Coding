#include<bits/stdc++.h>
using namespace std;

bool canDistributeEqually(int fruits) {
	if((fruits % 11) == 1) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	freopen("taktakin.txt", "r", stdin);
	freopen("taktakout.txt", "w", stdout);

	int fruits;
	cin >> fruits;

	int fullMoons = 0;
	while(!canDistributeEqually(fruits)) {
		fullMoons += 1;
		fruits = 2 * fruits;
	}	
	cout << fullMoons <<" " << fruits << endl;
	return 0;
}