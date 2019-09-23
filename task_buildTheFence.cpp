#include <bits/stdc++.h>

using namespace std;
int n;
long long k, a[100005], maxx = 0;

int main(){
    cin >> n >> k;
    for (long long i = 1; i <= n; i++){
        cin >> a[i];
        maxx = max(maxx, a[i]);
        
    }
    
    long long l = 0, r = maxx, mid, count;
    
    while (l != r){
        count = 0;
        mid = (l + r +1)/2;
        for(long long i = 1; i <= n; i++){
            count += a[i]/mid;
        }
        if (count >= k){
            l = mid;
        } else {
            r = mid - 1;
        }
    }
    
    cout << l;
    return 0;
}
