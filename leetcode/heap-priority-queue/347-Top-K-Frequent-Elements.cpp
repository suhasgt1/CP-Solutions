class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        for (int x : nums)
            count[x]++;
        vector<vector<int>> bucket(nums.size() + 1);
        for (auto [x, f] : count)
            bucket[f].push_back(x);
        vector<int> ans;
        for (int i = bucket.size()-1 ; ans.size() < k; i--) {
            for (int x : bucket[i])
                ans.push_back(x);
            if (ans.size() == k)
                break;
        }
        return ans;
    }
};