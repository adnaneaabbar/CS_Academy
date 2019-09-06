#include <bits/stdc++.h>

using namespace std;

int main() {
    long double s;
    long k;
    int q;
    cin >> s >> q >> k;
    
    int a[q];
    for (int i = 0; i < q; i++){
        cin >> a[i];
    }
    sort(a, a+q);
    for(int i = 0; i < q; i++){
        s = max(s + k , s + s*a[i]/100);
    }
    
    cout << fixed << setprecision(6)<< s;
    return 0;
}
