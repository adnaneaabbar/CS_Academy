#include <bits/stdc++.h>

using namespace std;


int main() {
    
    string s;
    cin >> s;
    
    for(int i = 0; i < s.size(); i++){
        if(s[i]=='A' && s[i+1]!=s[i]) cout << s[i];
        if(s[i]=='B') cout << s[i];
    }
    
    return 0;
    
}
