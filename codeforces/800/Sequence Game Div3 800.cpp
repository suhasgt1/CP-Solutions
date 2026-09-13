#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        vector<ll> arr(n);

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        vector<ll> ans;

        ans.push_back(arr[0]);

        for (int i = 1; i < n; i++) {

            if (arr[i] >= arr[i - 1]) {
                ans.push_back(arr[i]);
            }
            else {
                ans.push_back(1);    
                ans.push_back(arr[i]);
            }
        }

        cout << ans.size() << endl;

        for (ll x : ans)
            cout << x << " ";

        cout << endl;
    }
}