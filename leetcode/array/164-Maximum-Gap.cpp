class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort (nums.begin(), nums.end());
        int max=0;
        for (int i =1 ; i < nums.size(); i++){
            int currmax=nums[i]-nums[i-1];
            if (max<currmax) max=currmax;
        }
        return max ; 
    }
};