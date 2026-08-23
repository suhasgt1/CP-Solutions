class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i = prices[0];
        int profit=0;
        for (int x : prices ){
            i=min( x, i);
            profit= max(profit, x-i);
        }
        return profit;
    }
};