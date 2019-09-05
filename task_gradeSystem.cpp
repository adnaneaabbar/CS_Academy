#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int grades[n];
    
    for(int i = 0; i < n; i++){
        cin >> grades[i];
    }
    sort(grades, grades+n);
    
    int mean = 0;
    for(int i = 1; i < n-1; i++){
        mean += grades[i];
    }
    
    mean = floor(mean/(n-2));
    
    cout << mean;
    return 0;
}
