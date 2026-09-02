#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t; 
	cin >> t; 
	
	while (t--){
	    int n;
	    cin >> n;
	    
	    vector<int> arr(n);
	    map<int,int> mp;
	    
	    for (int i = 0; i < n; i++) {
	        cin >> arr[i];
	        int bit = 31 - __builtin_clz(arr[i]);
	        mp[bit]++;
	    }
	    
	    int ans = 0;
	    
	    for (auto x : mp) {
	        ans = max(ans, x.second);
	    }
	    
	    cout << ans << endl;
	}
}