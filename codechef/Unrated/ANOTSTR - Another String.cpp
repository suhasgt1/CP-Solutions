#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t; 
    cin >> t ; 

    while(t--){
        int n;
        cin >> n;
        string a,b;
        cin >> a >> b;
        int counta1=0,countb1=0;
        for(char x : a) (x=='1') ? counta1++ : counta1;
        for(char x : b) (x=='1') ? countb1++ : countb1;
        (counta1%2==countb1%2) ? cout << "YES" << endl : cout << "NO" << endl;
    }
}