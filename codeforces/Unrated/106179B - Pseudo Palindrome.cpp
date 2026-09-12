#include <bits/stdc++.h> 
using namespace std; 
 
#define ll long long 
#define l long 
#define inf 1e18 
#define vi vector<int> 
#define vll vector<ll> 
#define vs vector<string> 
#define pi pair<int,int> 
#define vp vector<pair<int,int>> 
#define vit vector<int>::iterator 
#define mii map<int,int> 
#define umii unordered_map<int,int> 
 
int main() { 
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
 
    ll t; 
    cin >> t; 
 
    while (t--) { 
        int n, d; 
        cin >> n >> d; 
        
        vector<int> a(n); 
        for (int i = 0; i < n; i++) cin >> a[i]; 
        
        sort(a.begin(), a.end()); 
        
        int cnt = 0;
        
        for (int i = 0; i < n-1; ) {
            if (a[i+1] - a[i] <= d) {
                cnt++;
                i += 2;
            }
            else {
                i++;
            }
        }
        
        if (cnt >= n/2) cout << "YES" << endl;  
        else cout << "NO" << endl; 
    } 
 
    return 0; 
}