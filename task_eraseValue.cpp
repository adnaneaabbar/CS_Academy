#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    int sum = 0, result;
    int a[n], freq[1001] = {};

    for(int i=0; i<n; ++i){
        cin >> a[i];
        freq[a[i]]++;
        sum += a[i];
    }
    
    sort(a, a+n);
    int max = a[0] * freq[a[0]];
    for(int i=0; i<n; ++i){
        a[i] *= freq[a[i]];
        if(a[i] > max) max = a[i];
    }
    
    result = sum - max;
    cout << result;
    
    return 0;
}
