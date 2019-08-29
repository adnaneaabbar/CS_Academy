#include <iostream>

using namespace std;

int main() {
    int a[6], b[6], freq[101] = {};
    for(int i = 0; i < 6 ; i++){
        cin >> a[i];
    }
    for(int i = 0; i < 6 ; i++){
        cin >> b[i];
    }
    for(int i = 0; i < 6 ; i++){
        for(int j = 0; j < 6 ; j++){
            freq[a[i] + b[j]]++;
        }
    }
    int max = freq[2];
    int index = 0;
    for(int i = 2; i < 101 ; i++){
        if(freq[i] > max){
            max = freq[i];
            index = i;
        }
    }
    cout << index;
    
    return 0;
}
