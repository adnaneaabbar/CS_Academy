#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;
    int freq[10] = {};
    string str = to_string(N);
    int len = sizeof(str) / sizeof(str[0]);
    for(int i = 0; i < len; i++){
        freq[str[i] - '0']++;
    }
    
    bool flag = true;
    for(int i = 1; i < 10; i++){
        if(freq[i] != freq[0]){
            flag = false;
            break;
        }
    }
    if(flag) cout << '1';
    else cout << '0';
    return 0;
}
