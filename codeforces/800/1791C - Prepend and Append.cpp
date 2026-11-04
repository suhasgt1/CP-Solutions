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

#define nx cout<<"\n"
#define d(x,y) ll x=y
#define ip(x) ll x;cin>>x
#define ipc(x) char x;cin>>x
#define ips(x) string x;cin>>x
#define op(x) cout<<x
#define opnx(x) cout<<x<<"\n"
#define ifor(i,a,b) for(int i=(a);i<b;++i)
#define dfor(i,a,b) for(int i=(a);i>b;--i)
#define afor(i,a) for(auto i:a)
#define all(x) (x).begin(),(x).end()
#define vin(v,n) vi v;ifor(i,0,n){ip(x);v.pb(x);}
#define pb(x) push_back(x)
#define sz(x) (int)(x).size()
#define unmap(m) unordered_map<int,int> m
#define st(w) set<int> w

using ld=long double;

const ll MOD=998244353;
const int MAX_FACT=1000005;

ll fact[MAX_FACT],inv[MAX_FACT];

void preFact(){
    fact[0]=1;
    for(int i=1;i<MAX_FACT;i++)
        fact[i]=fact[i-1]*i%MOD;

    inv[1]=1;
    for(int i=2;i<MAX_FACT;i++)
        inv[i]=(MOD-(MOD/i)*inv[MOD%i]%MOD)%MOD;
}

void precompute(){

}

void solve(){
    ip(n);
    ips(s); 
    int size=n;
    int start=0, end=n-1;
    while (start<end){
        if ((s[start]=='1'&&s[end]=='0')||(s[start]=='0'&&s[end]=='1')){
            start++;
            end--;
            n-=2;
        }
        else break; 
    }
    cout << n <<endl; 
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        solve();
    }

    return 0;
}