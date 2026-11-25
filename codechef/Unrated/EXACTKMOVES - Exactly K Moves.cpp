#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        if ((n + 1) / 2 <= k && k <= n) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}