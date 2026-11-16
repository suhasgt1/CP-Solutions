class Solution {
public:
    bool isHappy(int n) {
        if (n==1) return true ; 
        if(n==2||n==3||n==4) return false ; 
        int sq=0; 
        while(n!=0){
            sq+=((n%10)*(n%10));
            n/=10;
        }
        return isHappy(sq);
        

    }
};