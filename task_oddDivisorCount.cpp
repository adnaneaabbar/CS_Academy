#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int low, high, count=0;
    cin >> low >> high;
    for(int i = low; i <= high; i++){
        for(int j = 1; j <= i/sqrt(i)+1; j++){
            if(j*j == i){
                count++;
                break;
            }
        }
    }
    cout << count;
    return 0;
}
