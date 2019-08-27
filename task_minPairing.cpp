#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    
    sort(a, a+n);
    int minimalSum = 0;
    for(int i = 0; i < n ; i+=2){
        minimalSum += abs(a[i] - a[i+1]);
    }
    
    cout << minimalSum;
    return 0;
}
