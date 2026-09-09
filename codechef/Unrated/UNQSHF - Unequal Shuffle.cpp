#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin >> t ; 
	while (t--){
	    int n ; 
	    cin >> n ; 
	    int counta=0, countb=0;
	    vector <char> a(n) , b(n) ; 
	    for (int i =0 ; i < n ; i++) {
	        cin >> a[i];
	        if (a[i]=='a') counta++;
	        else countb++;
	    }
	    for (int i =0 ; i < n  ; i++) {
	        cin >> b[i];
	        if (b[i]=='a') counta++;
	        else countb++;
	        
	    }
	    if (counta==countb) cout << "YES" << endl; 
	    else cout << "NO" << endl ;
	}
}
