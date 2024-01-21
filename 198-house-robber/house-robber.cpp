class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size(), dp[n];
        dp[0]=nums[0];
        if(1<n) dp[1]=max(nums[0], nums[1]);
        for(int i=2;i<nums.size();i++) {
            dp[i]=max(nums[i]+dp[i-2], dp[i-1]);
        }
        return dp[n-1];
    }
};