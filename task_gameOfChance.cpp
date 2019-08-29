#include <iostream>

using namespace std;

int main() {
    int n, a, b, temp;
    cin >> n >> a >> b;
    
    for(int i = 0; i < n; i++){
        cin >> temp;
        a += temp;
    }
    for(int i = 0; i < n; i++){
        cin >> temp;
        b += temp;
    }
    
    
    if(a<b) cout << '2';
    else if(a>b) cout << '1';
    else cout << '0';
    
    return 0;
}
