#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; 
	cin >> t ; 
	while (t--){
	    int n ; 
	    cin >> n ; 
	    vector <int> arr(n);
	    for (int i=0 ; i < n ; i++) cin >> arr[i];
        int oddcount=0;
        map <int,int> oddcounts;
        for(int i =0 ; i < n ; i++) oddcounts[arr[i]]++;
        for (auto [x,f]: oddcounts) oddcount=max(oddcount,f);
        cout << (oddcount+1)/2<<endl; 
        
	}

}
