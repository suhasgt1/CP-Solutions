/*#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

#define ll long long
#define l long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t ; 
    cin >> t ; 
    while (t--){
        int n ; 
        cin >> n; 
        vector <ll > arr(n);
        int odd =0 , even =0;
        for (int i =0 ; i < n ; i++) {
            int ele ; 
            cin >> ele ;
            arr[i]=ele;
            if (ele%2==0)even++;
            else odd++;
        }
        if (odd==1&& even ==1 )cout << "NO"<< endl;
        else if (odd>=2 && even==0||even >=2&& odd==0) cout << "YES" <<endl;
        else if (odd==2&& even ==1) cout << "YES" << endl;
        else if (odd==even) cout << "YES" <<endl; 
        else cout << "NO" << endl; 


    }
    return 0;
}
// though i was getting right answer it wasn't the most efficient
//don't overthink the questions
//try the most simplest approach first
//didn't pass one test case    
*/



//more efficient solution 



#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int sum = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            sum += x;
        }

        if (sum % 2 == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
