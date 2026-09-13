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
    set <char> st;
    string s; 
    getline(cin , s);
    for (char c : s) if (isalpha(c)) st.insert(c);
    cout << st.size()<< endl;
    
    return 0;
}