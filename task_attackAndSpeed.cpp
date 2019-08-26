#include <iostream>

using namespace std;

int main() {
    long a, s, k, x, y, c; 
    cin >> a >> s >> k >> x >> y;
    
    //looking for c, such as: c + (k-c) = k
    c = k - (a + k*x - s)/(x+y);
    c < 0 ? c = -1 : c;
    //check if S == A
    (a + c*x) != (s + (k-c)*y) ? c = -1 : c;
    
    cout << c;
    return 0;
}
