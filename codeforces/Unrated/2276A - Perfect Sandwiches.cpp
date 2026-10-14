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
        ll a, b;
        cin >> a >> b;

        if (a <= b) cout << -1 << endl;
        else cout << min(b, a - b) << endl;
    }

    return 0;
}