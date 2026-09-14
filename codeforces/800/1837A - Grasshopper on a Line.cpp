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
        int x , k; 
        cin >> x >> k; 
        // in one move it jumps some distance that is not divisible by k 
        // it can either move to left or right
        // if the x%k==0 that means moves is two
        // that is x-k+1 , k-1
        // if that is not the case one move and directly x itself
        if (x%k==0){
            cout << 2 << endl;
            cout << x-k+1 <<  " " << k-1 << endl; 
        }
        else {
            cout << 1 << endl; 
            cout << x << endl; 
        }
        
    }

    return 0;
}