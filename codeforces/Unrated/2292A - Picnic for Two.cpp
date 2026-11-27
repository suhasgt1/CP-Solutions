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

#define nx cout<<"\n"
#define d(x,y) ll x=y
#define ip(x) ll x;cin>>x
#define ipc(x) char x;cin>>x
#define ips(x) string x;cin>>x
#define op(x) cout<<x
#define opnx(x) cout<<x<<"\n"
#define ifor(i,a,b) for(int i=(a);i<b;++i)
#define dfor(i,a,b) for(int i=(a);i>b;--i)
#define afor(i,a) for(auto i:a)
#define all(x) (x).begin(),(x).end()
#define pb(x) push_back(x)
#define sz(x) (int)(x).size()

void solve() {
    ip(il); ip(a); ip(b);
    set<ll> s, blue;
    ll curr = 0;
    do {
        s.insert(curr);
        curr = (curr + a) % il;
    } while (curr != 0);
    curr = 0;
    do {
        blue.insert(curr);
        curr = (curr + b) % il;
    } while (curr != 0);
    ll ans = 0;
    for (auto x : s) {
        if (blue.count(x)) ans++;
    }
    opnx(ans);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}