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
        string s;
        cin >> s;

        // first and last character can't be replaced
        // choose at most one character and replace it with its compliment
        // replace each block of consecutive equal characters with one such character
        // 0001 is 01 ig
        // fucking hell so many word agh
        // essentially 001 only middle term can be editied as sides can't be touched
        // that allows it to be 011 or 001 it self and the second condition
        // makes it 01 or 01 that results in the same type of string
        // 000 here again sides untouched by the centre can be
        // 010 or 000 itself and second condition makes it 010 or 0 (shorten)
        //that makes the result '2'
        // 010 can be either 000 or 010 itself that is 0 or 010 final thus '2'

        ll n = s.size();
        bool same = false, alt = false;

        for (ll i = 1; i < n - 1; i++) {
            if (s[i-1] == s[i] && s[i] == s[i+1])
                same = true;

            if (s[i-1] == s[i+1] && s[i] != s[i-1])
                alt = true;
        }

        cout << 1 + same + alt << endl;
    }

    return 0;
}