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

        vector<ll> arr(n);
        int count= INT_MIN,currcount=0;
        for (int i = 0; i < n; i++) cin >> arr[i];
        for (int i =0 ; i < n ; i++)if (arr[i]==0)currcount++;
        else {
            count=max(count,currcount);
            currcount=0;
        }
        count=max(count,currcount);
        cout << count << endl; 
        
    }

    return 0;
}