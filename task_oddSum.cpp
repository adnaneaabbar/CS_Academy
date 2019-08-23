#include <iostream>

using namespace std;

int main() {
    int N, count[2] = {};
    cin >> N;
    int A;
    for(int i = 0; i < N; i++){
        cin >> A;
        count[A%2]++;
    }
    cout << count[0]*count[1];
    return 0;
}
