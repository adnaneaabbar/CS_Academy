#include <iostream>

using namespace std;

int pgcd(int a, int b){
    if(a==b){
        return a;
    } else {
        if(a>b){
            return pgcd(a-b, b);
        } else {
            return pgcd(a, b-a);
        }
    }
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << pgcd(a, b);
    return 0;
}
