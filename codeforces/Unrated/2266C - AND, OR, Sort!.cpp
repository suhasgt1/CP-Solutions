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

    int t;
    cin >> t;

    while (t--) {
        int n ; 
        cin >> n;
        string s;
        cin >> s;
        int count0 = 0, count1 = 0;

        for (char x : s) {
            if (x == '0')
                count0++;
        }
        if (s[0] == '1') {
            cout << count0 << endl;
            continue;
        }
        int ans = count0;
        for (char x : s) {
            if (x == '0')
                count0--;
            else
                count1++;

            ans = min(ans, count0 + count1);
        }
        cout << ans << endl;
    }
}