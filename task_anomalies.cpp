#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k, j;
    cin >> n;
    cin >> k;
    int a[n];
    
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    int anomalies = 0;
    
    for(int i = 0; i < n; i++){
        
        for(j = 0; j < n; j++){
            if(abs(a[i] - a[j]) <= k  &&  i != j) break;
        }
        
        if(j == n) anomalies++;
    }
    
    cout << anomalies;
    return 0;
}
