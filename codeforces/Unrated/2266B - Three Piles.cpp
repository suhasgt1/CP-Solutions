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
    // alice has a stones
    // bob has b stones
    // c has some stones kept and alice starts first

    while (t--) {
        ll a, b, c;
        cin >> a >> b >> c;

        cout << max(abs(a-b), abs(a+c-b)) << endl;
    }


    return 0;
}