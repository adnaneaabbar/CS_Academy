#include <bits/stdc++.h>

using namespace std;

int main() {
    int max = 0;
    int count = 0;
    int n;
    int temp;
    cin >> n;
    for(int i = 0; i<n; i++){
        cin >> temp;
        if(temp > max){
            max = temp;
            count++;
        }
    }
    cout << count;
    return 0;
}
