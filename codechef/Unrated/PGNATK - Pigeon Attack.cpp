#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t ; 
	cin >> t ; 
	while(t--){
	    int n , k  ;
	    cin >> n >> k ; 
	    if (n<k) cout << n << endl; 
	    else {
	        cout << (n-1)/(k-1)+n << endl; 
	    }
	}

}
