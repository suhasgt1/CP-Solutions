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

    ll n;
    cin >> n;
    //vector<string> arr;
    while (n--) {
        ll t ;
        cin >> t;
        vector <ll> arr(t);
        for (ll i =0 ; i < t; i++) cin >> arr[i];
        if (arr[0]==1) cout << "Yes"<< endl;
        else cout << "No"<< endl; 
        
    }

    return 0;
}