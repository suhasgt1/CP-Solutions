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
        int pos=0 , neg=0, ans=0;
        vector<ll> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            (arr[i]==-1) ? neg++: pos++;
        }
        while (pos < neg || neg % 2) {
        pos++;
        neg--;
        ans++;
        }
        cout << ans << endl; 
        
    }

    return 0;
}