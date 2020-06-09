#include<bits/stdc++.h>
using namespace std;

int main() {
    int length;
    cin >> length;
    char arr[length];
    for(int i=0; i<length; i++) {
        cin >> arr[i];
    }

    int a_count = 0;
    int s_count = 0;
    int p_count = 0;
    for(int i=0; i<length; i++) {
        if(arr[i] == 'a') {
            a_count++;
        }
        if(arr[i] == 's') {
            s_count++;
        }
        if(arr[i] == 'p') {
            p_count++;
        }
    }
    cout << a_count << " " << s_count << " " << p_count << endl;
    return 0;
}