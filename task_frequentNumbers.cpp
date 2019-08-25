#include <bits/stdc++.h>

using namespace std;

int countKAppearences(int arr[], int n, int k){
    int result = 0; 
  
    // Initialize frequency array
    int freq[1001] = {}; 
  
    for (int i = 0; i < n; i++) { 
        // Increment frequency
        freq[arr[i]] += 1;
    }
    // Compute the result
    for (int i = 1; i < 1001; i++) { 
        if (freq[i] >= k) result += 1;
    }
    return result;
} 

int main() {
    int K, N;
    cin >> N >> K;
    int arr[N];
    for(int i = 0; i<N; i++){
        cin >> arr[i];
    }
    cout << countKAppearences(arr, N, K);
    return 0;
}
