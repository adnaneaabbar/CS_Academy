#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    double a[n+1];
    double c, b;
    
    for(int i = 1; i <= n; i++){
        cin >> c >> b;
        a[i] = c/b;
    }
    
    int number = 1;
    double max = a[1];
    
    for(int i = 2; i <= n; i++){
        if(a[i] > max){
            max = a[i];
            number = i;
        }
    }
    
    cout << number;
    return 0;
}
