#include <bits/stdc++.h>

using namespace std;

int main() {
    int x=0, y=0;
    string s;
    cin >> s;
    for(auto c: s){
        if(c == 'N') y++;
        else if(c == 'W') x--;
        else if(c == 'E') x++;
        else y--;
    }
    cout << abs(x) + abs(y);
    return 0;
}
