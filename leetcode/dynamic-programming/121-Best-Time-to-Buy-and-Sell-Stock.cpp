class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i = INT_MAX;
        int profit = 0;

        for (auto price : prices) {
            if (price < i)
                i = price;
            else if (price - i > profit)
                profit = price - i;
        }

        return profit;
    }
};