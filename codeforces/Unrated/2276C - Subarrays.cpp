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
        ll n, k;
        cin >> n >> k;

        vll pref(n + 1, 0);

        for (ll i = 1; i <= n; i++) {
            ll x;
            cin >> x;
            pref[i] = (pref[i-1] + x) % k;
        }

        vll freq(k, 0);
        ll ans = 0;

        for (ll r = k + 1; r <= n; r++) {
            freq[pref[r-k-1]]++;
            ans += freq[pref[r]];
        }

        cout << ans << endl;
    }

    return 0;
}