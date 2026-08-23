class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int start=nums[0], diff=-1;
        for (int x : nums){
            start=min(x,start);
            if (x-start!=0) diff=max(diff, x-start);
        }
        return diff;
    }
};