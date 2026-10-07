#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;

    while (t--) {
        ll n,m;
        cin >> n >> m;
        string s,l;
        cin >> s >> l;
        int count = 1, ans = 1;

        for (int i = 1; i < n; i++) {
            bool a = l.find(s[i-1]) != string::npos;
            bool b = l.find(s[i]) != string::npos;

            if (a == b)
                count++;
            else
                count = 1;
            ans = max(ans,count);
        }

        cout << ans << endl;
    }

    return 0;
}