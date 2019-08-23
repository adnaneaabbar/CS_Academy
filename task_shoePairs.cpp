#include <iostream>

using namespace std;

int main() {
    int sizeCountLeft[101] = {};
    int sizeCountRight[101] = {};
    int pairs = 0;
    int N;
    int s;
    char c;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> s >> c;
        if(c=='L'){
            sizeCountLeft[s]++;
        } else {
            sizeCountRight[s]++;
        }
    }
    for(int j = 1; j < 101; j++){
        pairs += min(sizeCountLeft[j], sizeCountRight[j]);
    }
    cout << pairs;
    return 0;
}
