class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++) {
            if(m[nums[i]] && abs(i+1-m[nums[i]])<=k) return 1;
            m[nums[i]]=i+1;
        }
        return 0;
    }
};