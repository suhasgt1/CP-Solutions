#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

#define ll long long


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //kth dragon got punched
    //lth dragon got his tail shut in the balcony door
    //mth dragon got his paws trampled with a sharp object
    //nth dragon got prince mum called
    ll k, l,m,n , d;
    cin >> k >> l >> m >> n >> d;

    ll count=0;
    for (int i =1; i <= d; i ++){
        if (i%k==0||
            i%l==0||
            i%m==0||
            i%n==0) count++;
    }
    cout << count<< endl;

    return 0;
}