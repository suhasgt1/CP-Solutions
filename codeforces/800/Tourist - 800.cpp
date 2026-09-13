#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;

        int min_dist = INT_MAX;
        for (int i = 0; i < n; i++) {
            int x, y;
            cin >> x >> y;
            min_dist = min(min_dist, abs(x - a) + abs(y - b));
        }
        cout << min_dist << '\n';
    }
    return 0;
}
