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

        int ele, countodds=0;
        for (int i = 0; i < n; i++) {
            cin >> ele; 
            if (ele%2!=0) countodds++;
        }
        if (countodds%2) cout <<"NO" <<endl; 
        else cout << "YES" << endl; 

        
    }

    return 0;
}