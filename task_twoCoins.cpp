#include <bits/stdc++.h>

using namespace std;

int main() {
	int N;
	cin >> N;
    int temp;
    
	vector<int> values;
	for(int i =0; i<N; i++){
	    cin >> temp;
	    values.push_back(temp);
	}

	vector<int> sums;
	for (int i = 0; i < N; ++i){
		for (int j = i + 1; j < N; ++j){
			sums.push_back(values[i] + values[j]);
		}
	}
	sort(sums.begin(), sums.end());
	sums.erase( unique(sums.begin(), sums.end()), sums.end());

	cout << sums.size() << endl;

	return 0;
}
