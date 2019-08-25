#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    int toFill = 0;
    cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    sort(arr, arr+n);
    for(int i = 0; i< k; i++){
        toFill += arr[i];
    }
    if (toFill/100*100 == toFill) cout << toFill/100;
    else cout << (toFill / 100) + 1;
    return 0;
}
