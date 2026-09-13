#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    while(n--){
        int la , lb ;
        string a, b;
        cin >> la>>a>> lb >> b;
        string order , final ;
        cin >> order;
        final=a;
        for (int i =0; i<order.length();i++){
            if (order[i]=='D'){
                final+=b[i];
            }
            if (order[i]=='V'){
                a=final;
                final="";
                final=final+ b[i];
                final=final+a;
            }
        }
        cout<< final<< endl;
    
    }
    return 0;
}
        
