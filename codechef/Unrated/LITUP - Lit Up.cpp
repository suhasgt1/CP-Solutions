#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n,k,ans=1000000;
        cin >> n >> k;

        vector<int> c(n);

        for(int i=0;i<n;i++)
            cin >> c[i];

        for(int i=0;i<n;i++) {
            for(int j=i+1;j<n;j++) {

                bool possible=true;

                for(int x=0;x<n;x++) {
                    if(abs(x-i)>k && abs(x-j)>k) {
                        possible=false;
                        break;
                    }
                }

                if(possible)
                    ans=min(ans,c[i]+c[j]);
            }
        }

        if(ans==1000000)
            cout << -1 << endl;
        else
            cout << ans << endl;
    }
}