#include <bits/stdc++.h>

using namespace std;


int n, a[2002], dp[2002];

int main(){
    dp[0] = 1;

    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a, a+n);

    int result = 0;
    
    for (int i = 1; i < n; i++) {
        
        dp[i] = 1;
        
        for (int j = i-1; j >= 0; j--) {
            
            if (a[i] % a[j] == 0) {
                dp[i] = max(dp[i], dp[j]+1);
            }
        }
        
        result = max(result, dp[i]);
    }
    cout << result << endl;
    return 0;
}
