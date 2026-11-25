#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        long long n, m, r, c;
        cin >> n >> m >> r >> c;

        if(n == 1) {
            cout << m - 1 + min(c - 1, m - c) << endl;
            continue;
        }

        if(m == 1) {
            cout << n - 1 + min(r - 1, n - r) << endl;
            continue;
        }

        vector<pair<long long,long long>> a = {
            {1,1}, {1,m}, {n,1}, {n,m}
        };

        long long ans = LLONG_MAX;

        do {
            long long x = r, y = c, sum = 0;

            for(auto [u,v] : a) {
                sum += max(abs(x-u), abs(y-v));
                x = u;
                y = v;
            }

            ans = min(ans, sum);
        } while(next_permutation(a.begin(), a.end()));

        cout << ans << endl;
    }
}