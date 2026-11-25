#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        long long sum = 0, mx = 0, ans = 0;
        for(auto &x : a) {
            cin >> x;
            sum += x;
            mx = max(mx, x);
        }
        ans = sum - mx;
        for(auto x : a)
            ans = max(ans, sum + x - max(mx, 2 * x));
        cout << ans << endl;
    }
}