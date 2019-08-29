#include <bits/stdc++.h>

using namespace std;

int main() {
    string s, p;
    cin >> s >> p;
    
    for(int i = 0; i < s.size(); i++){
        cout << p[(int)(s[i]) - 97];
    }
    
    return 0;
}
