#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        int countn = 0, x;

        for (int i = 0; i < n; i++) {
            cin >> x;
            if (x == -1) countn++;
        }

        int ans = max(0, countn - (int)n / 2);

        if ((countn - ans) % 2)
            ans++;

        cout << ans << endl;
    }

    return 0;
}