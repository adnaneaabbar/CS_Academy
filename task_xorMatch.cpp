#include <bits/stdc++.h>

using namespace std;

int n,m,a[1001],b[1001],matches = 0;

int main(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < m; i++){
        cin >> b[i];
    }
    
    int i; // value needed after the nested loop
    for(int j = 0; j <= m - n; j++){
        
        for(i = 0; i < n; i++){
            if(a[i] == b[i+j]){
                break;
            } 
        }   
        
        if(i == n) matches++; //after all iteration with no break
    }
    
    cout << matches;
    return 0;
}
