#include <bits/stdc++.h>

using namespace std;

int main() {
    
    string s;
    int a[27];
    int sum = 0;
    
    
    cin >>s;
    for(int i = 1; i < 27; i++){
        cin >> a[i];
    }
    
    for(int i = 0; i < s.size(); i++){
        sum += a[(int)s[i] - 96];
    }
    cout << sum;
    
    return 0;
}
