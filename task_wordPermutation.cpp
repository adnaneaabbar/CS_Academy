#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector< pair<string, int> > v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i].first; //string
        v[i].second = i+1; //position in unordered list
    }
    
    sort(v.begin(), v.end()); //sorting
    
    //all we have to do is print the same positions in the order of the sorted list
    for(auto element : v){
        cout << element.second << ' ';
    }
    
    return 0;
}
