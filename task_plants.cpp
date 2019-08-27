#include <iostream>

using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    int t[m], a[n], b[n];
    for(int i = 0; i < m; ++i){
        cin >> t[i];
    }
    for(int i = 0; i < n; ++i){
        cin >> a[i] >> b[i];
    }
    
    int total;    
    for(int i = 0; i < n; ++i){
        total = 0;
        for(int j = 0; j < m; ++j){
            if(t[j] <= b[i] && t[j] >= a[i]) total++;
        }
        cout << total <<endl;
    }

    return 0;
}
