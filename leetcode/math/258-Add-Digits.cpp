class Solution {
public:
    int addDigits(int num) {
        while (num>=10){
            int sum =0;
            string s= to_string(num);
            for(char x : s) sum+=(x-'0');
            num=sum;
        }
        return num;
    }
};