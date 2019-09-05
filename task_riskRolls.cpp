#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    int a[n], b[m];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < m; i++){
        cin >> b[i];
    }
    
    sort(a,a+n);
    sort(b,b+m);
    
    int A=0,B=0;
    
    for(int i = 0; i < min(n,m); i++){
        a[i]>b[i] ? A++ : B++;
    }
    
    cout << A << " " << B;
    return 0;
}
