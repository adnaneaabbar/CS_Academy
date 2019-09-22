#include <bits/stdc++.h>

using namespace std;

int a,b;
int maxx = -1;
int target;
int holes[10] = {1,0,0,0,0,0,1,0,2,1};

int main(){
    
    cin>>a>>b;
    for(int i = a; i <= b; i++){
        
        int j = i;
        int count;
        
        if(i == 0) count = 1;
        else count = 0;
        
        while(j > 0){
            count += holes[j % 10];
            j /= 10;
        }
        
        if(maxx < count) {
            maxx = count;
            target = i;
        }
    }
    cout << target;
    
    return 0;
}
