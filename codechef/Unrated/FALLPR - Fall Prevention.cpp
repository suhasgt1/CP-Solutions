#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, sum=0, bad=-1;
        cin >> n;

        vector<int> a(n), pre(n), suf(n);

        for(int i=0;i<n;i++) {
            cin >> a[i];
            sum += a[i];
            pre[i] = sum;

            if(sum<0 && bad==-1)
                bad=i;
        }

        if(bad==-1) {
            cout << "YES" << endl;
            continue;
        }

        suf[n-1]=pre[n-1];

        for(int i=n-2;i>=0;i--)
            suf[i]=min(pre[i],suf[i+1]);

        bool ok=false;

        for(int j=0;j<=bad;j++) {
            if(j==n-1 || suf[j+1]>=a[j]) {
                ok=true;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << endl;
    }
}