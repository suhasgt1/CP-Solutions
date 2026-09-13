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
        ll n; 
        cin >> n; 
 
        ll diff = INT_MAX; 
        vector<ll> arr(n); 
 
        cin >> arr[0]; 
 
        for (int i = 1; i < n; i++) { 
            cin >> arr[i]; 
 
            ll ele = arr[i] - arr[i - 1]; 
 
            if (ele < 0) 
                diff = -1; 
            else if (diff != -1) 
                diff = min(diff, ele); 
        } 
 
        if (diff == -1) 
            cout << 0 << endl; 
        else 
            cout << diff / 2 + 1 << endl; 
    } 
 
    return 0; 
}