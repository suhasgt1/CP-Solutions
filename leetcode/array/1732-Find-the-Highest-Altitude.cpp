class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum = 0, maxm = 0;

        for (int x : gain) {
            sum += x;
            maxm = max(maxm, sum);
        }

        return maxm;
    }
};