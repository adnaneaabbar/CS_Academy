#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;
    int minSum = 0;

    for(int i = 0; i < 3; i++){
        cin >> a >> b >> c;
        minSum += min(a,min(b,c));
    }
    cout << minSum;
    return 0;
}
