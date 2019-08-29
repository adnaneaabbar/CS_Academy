#include <bits/stdc++.h>

using namespace std;

long long n,m,x,y;

int main()
{
    cin >> n >> m >> x >> y;
    
    //First let's check if we can evolve a fixed number of Pokémon A. For this we need A∗X candy bars. 
    //we should check if M + (N−A)∗Y ≥ A∗X.
    cout << ( (m/x >= n) ? (n) : (y*n+m)/(x+y) );
    
    return 0;
}
