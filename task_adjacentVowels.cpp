#include<bits/stdc++.h>

using namespace std;

string str;
string vowels = "aeoui";

bool isVowel(char c){
    for(int i = 0; i < 5; i++){
        if(c == vowels[i]) return true;
    }
    return false;
}

int check(string sub){
    
    if( isVowel(sub[0]) && isVowel(sub[1]) ) return 1;  //counting occurences of the two-gram
    return 0;
}

int main(){
    
    int n, temp = 0;
    cin >> n;
    cin >> str;

    for(int i = 0; i < n - 1; i++){
        
        string sub = str.substr(i, 2); //isolating the two-gram
        temp += check(sub);
    }

    cout << temp;
    return 0;
}
