#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;

    while (t--) {
        ll a, b;
        cin >> a >> b;

        vector<ll> station(a);

        for (int i = 0; i < a; i++) {
            cin >> station[i];
        }

        ll start = 0;
        vector<ll> distance;

        for (int i = 0; i < a; i++) {
            distance.push_back(station[i] - start);
            start = station[i];
        }

        distance.push_back((b - station[a - 1]) * 2);

        sort(distance.begin(), distance.end(), greater<ll>());

        cout << distance[0] << endl;
    }

    return 0;
}
