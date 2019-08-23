#include <iostream>

using namespace std;

int main() {
    unsigned int count[3] = {};
    unsigned int N, temp;
    cin >> N;
    for(unsigned int i = 0; i < N; i++){
        cin >> temp;
        count[temp%3]++;
    }
    cout << (count[0]*(count[0]-1))/2 + count[1]*count[2];
    return 0;
}
