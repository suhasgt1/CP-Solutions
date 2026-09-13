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
        int score=0;
        vector <vector<char>> box (10,vector<char>(10));
        for (int i =0 ; i < 10 ; i++){
            for (int j=0 ; j < 10 ; j++) {
                cin >> box[i][j];
                if (box[i][j]=='X'){
                    if (i==0||i==9||j==0||j==9) score+=1;
                    else if (i==1||i==8||j==1||j==8) score+=2;
                    else if (i==2||i==7||j==2||j==7) score+=3;
                    else if (i==3||i==6||j==3||j==6) score+=4;
                    else if (i==4||i==5||j==4||j==5) score+=5;
                }         
            }
        }
        cout << score <<endl; 

        
    }

    return 0;
}