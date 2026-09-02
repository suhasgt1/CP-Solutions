#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t; 
	while (t--){
	    int k, n, sum=0; 
	    cin >> n >> k;
	    
	    vector<int> arr(n);
	    for (int i=0; i<n; i++) {
	        cin >> arr[i];
	        sum += arr[i];
	    }
	    
	    int i=0, j=n-1;
	    int currsum=sum;
	    
	    for (int x=0; x<k; x++){
	        currsum -= arr[j];
	        j--;
	    }
	    
	    int ans=currsum;
	    
	    for (int x=0; x<k; x++){
	        j++;
	        currsum += arr[j];
	        
	        currsum -= arr[i];
	        i++;
	        
	        ans=max(ans, currsum);
	    }
	    
	    cout << ans << endl;
	}
}