class Solution {
public:
    long long sumAndMultiply(int n) {
        string s = to_string(n), newstr = "";

        for (char x : s)
            if (x != '0')
                newstr += x;

        if (newstr.empty())
            return 0;

        long long sum = 0;

        for (char x : newstr)
            sum += x - '0';

        long long num = stoll(newstr);

        return num * sum;
    }
};