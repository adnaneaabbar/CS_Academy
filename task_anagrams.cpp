#include <bits/stdc++.h>

using namespace std;

int largestSetOfEquivalentWords(string array[], int n){
    
    int largestSet = 0;
    unordered_map<string, int> count;
    
    for(int i = 0; i < n; i++){
        // Sort
        sort(array[i].begin(), array[i].end()); 
        // Increment count
        count[array[i]] += 1; 
        // Update maximum 
        largestSet = max(largestSet, count[array[i]]);
    }
    return largestSet;
}

int main() {
    int N;
    cin >> N;
    string arr[N];
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    cout << largestSetOfEquivalentWords(arr, N);
    return 0;
}
