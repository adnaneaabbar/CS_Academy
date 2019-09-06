#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    int left[n], right[n];
    
    for(int i = 0; i < n; i++){
        cin >> left[i] >> right[i];
    }
    
    int count = 0;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(left[j] < left[i] && right[i] < right[j]){
                count++;
                break;
            }
        }
    }
    
    cout << count;
    return 0;
}
