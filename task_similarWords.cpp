#include <bits/stdc++.h>

using namespace std;


// computes the longest common prefix of W and S
int lcp(const string& W, const string& S) {
    int result = 0;

    for (int itr = 0; itr < (int)min(W.size(), S.size()) &&
                      W[itr] == S[itr]; itr++) {
        result += 1;
    }

    return result;
}

// computes the longest common suffix of W and S
int lcs(const string& W, const string& S) {
    int result = 0;

    for (int itr = 1; itr <= (int)min(W.size(), S.size()) &&
                      W[W.size() - itr] == S[S.size() - itr]; itr++) {
        result += 1;
    }
    
    return result;
}

// Check if it's possible to add a character to W so (W == S)
// W.size() == S.size() - 1
bool addOne(const string& W, const string& S) {
    if (lcp(W, S) + lcs(W, S) >= (int)W.size()) {
        return true;
    } else {
        return false;
    }
}

// Check if it's possible to maybe change a character from W such that W so (W == S)
// W.size() == S.size()
bool canChangeOne(const string& W, const string& S) {
    if (W == S) {
        return true;
    }

    if (lcp(W, S) + lcs(W, S) == (int)W.size() - 1) {
        return true;
    } else {
        return false;
    }
}

// Check if it's possible to delete a character from W so (W == S)
// W.size() == S.size() + 1
bool deleteOne(const string& W, const string& S) {
    if (lcp(W, S) + lcs(W, S) >= (int)W.size() - 1) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int N;
    cin >> N;
    
    string S;
    cin >> S;
    
    int result = 0;

    for (int i = 0; i < N; i += 1) {
        
        string W;
        cin >> W;
        
        if (W.size() == S.size()) {
            result += canChangeOne(W, S);
        } else if (W.size() == S.size() + 1) {
            result += deleteOne(W, S);
        } else if (W.size() + 1 == S.size()) {
            result += addOne(W, S);
        }
    }

    cout << result << '\n';
    return 0;
}
