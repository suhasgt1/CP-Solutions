#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define l long
#define inf 1e18
#define vi vector<int>
#define vll vector<ll>
#define vs vector<string>
#define pi pair<int,int>
#define vp vector<pair<int,int>>
#define vit vector<int>::iterator
#define mii map<int,int>
#define umii unordered_map<int,int>

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;

    while (t--) {
        ll n, k , x ; 
        cin >> n >> k >> x; 
        if (x!=1){
            cout << "YES\n" << n << endl; 
            for (int i =0 ; i < n ; i++) cout << 1 << " ";
            cout << endl; 
        }
        else if (x==1 && n%2==0 && k>=2 ){
            cout << "YES\n" << n/2 << endl; 
            for (int i =0 ; i < n/2 ; i++) cout << 2 << " ";
            cout << endl;  
        }
        else if (x==1 && n%2==1&& n>=3&& k>=3){
            int count=n/2 -1;
            count++;
            cout << "YES\n" << count << endl; 
            for (int i =0 ; i < count-1; i++) cout << 2 << " ";
            cout << 3 << endl; 
        }
        else cout << "NO" << endl; 
    }

    return 0;
}