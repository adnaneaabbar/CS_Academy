#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    string temp;
    string toSort;
    
    for(int i = 0; i<n; i++){
        cin >> temp;
        sort(temp.begin(), temp.end());
        toSort.push_back(temp[0]);
    }
    
    sort(toSort.begin(), toSort.end());
    
    cout << toSort;
    return 0;
}
