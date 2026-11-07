
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,off=0,ans=0;
    cin>>n;

    while(n--){
        int x;
        cin>>x;

        if(x==-1){
            if(off>0) off--;
            else ans++;
        }
        else{
            off+=x;
        }
    }

    cout<<ans<<endl;

    return 0;
}
