#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;

        for (int d = 1; ; d++) {
            bool ok = false;
            for (int m = 1; m <= d; m++) {
                int sq = m * (m + 1) * (2 * m + 1) / 6;
                int mined = y * (sq + (d - m) * m * m);
                int cost = x * m;

                if (mined > cost) {
                    ok = true;
                    break;
                }
            }
            if (ok) {
                cout << d << endl;
                break;
            }
        }
    }
    return 0;

}
