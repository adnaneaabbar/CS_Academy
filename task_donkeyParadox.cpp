#include <iostream>

using namespace std;

int hx,hy,Hx,Hy;

int starve(int i, int j){
    return (abs(hx - i) + abs(hy - j)) == (abs(Hx - i) + abs(Hy - j));
}

int main() {
    int n, m, sum = 0;
    cin >> n >> m;
    cin >> hx >> hy >> Hx >> Hy;
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if ( starve(i, j) ) sum++;
        }
    }
    cout << sum;
    return 0;
}
