class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod=1; 
        for (int x : nums){
            prod*=x;
        }
        vector<int> ans;
        for (int i =0 ; i < nums.size() ; i++){
            if (nums[i]==0){
                int newprod=1;
                for (int j=0 ; j <nums.size(); j++){
                    if (i==j) continue;
                    else newprod*= nums[j];
                }
                ans.push_back(newprod);
            }
            else ans.push_back(prod/nums[i]);
        }
        return ans;

    }
};
