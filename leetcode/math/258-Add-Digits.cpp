class Solution {
public:
    int addDigits(int num) {
        // last submission of mine was efficient but not the most optimal 
        //there is a formula that gives us sum of all digits
        // its defined by 1+ (num-1)%9
        //basically for 17 that is 1+ 16%9 = 1+7 =8
        // or for say 37 that is 1+(37-1)%9 =1
        // exception being when num is 0
        if (num==0) return 0;
        return (1+(num-1)%9);
    }
};