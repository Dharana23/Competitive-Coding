#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d)
{
    if (a > b){
        if (a > c){
            if (a > d){
                return a;
            }
        }
    }
    if (b > a){
        if (b > c){
            if (b > d){
                return b;
            }
        }
    }
    if (c > a){
        if (c > b){
            if (c > d){
                return c;
            }
        }
    }
    else
        return d;

    return 0;
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int ans = max_of_four(a, b, c, d);
    cout << ans;
    
    return 0;
}
