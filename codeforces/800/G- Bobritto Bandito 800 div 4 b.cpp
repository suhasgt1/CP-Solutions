/*
#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

#define ll long long
#define l long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t ;
    cin >> t ;
    while (t--){
        int n ;
        cin >> n ;
        vector <ll > arr(n);
        set <ll> st;
        for (int i =0 ; i < n ; i++)
        {
            ll ele ;
            cin  >> ele ;
            arr[i]= ele ;
            st.insert(ele);
        }
        if (st.size() >=3) cout << "No"<< endl;
        else if (st.size()==1) cout << "Yes" << endl;
        else if (st.size()==2 && arr.size()==2|| st.size()==2&& arr.size()==3)cout << "Yes"<< endl;
        else {

        }
    }
    
    return 0;
}

*/



#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

#define ll long long
//#define l long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
 
    while (t--) {
    int n, m, l, r; cin >> n >> m >> l >> r;
    int diff = n - m;
    l = abs(l);
    if (l >= diff) {
        l -= diff;
        diff = 0;
    }
    else {
        diff -= l;
        l = 0;
    }
    cout << -l << " " << r - diff << '\n';  
    }

    return 0;
}