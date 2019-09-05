#include <bits/stdc++.h>

using namespace std;

int main() {
    string x;
    string rx;
    
    cin>>x;
    
    for(int i = x.length()-1; i >= 0; i--){
        rx += x[i];
    }
    
    cout << ( x < rx ? 1 : 0 );
    return 0;
}
