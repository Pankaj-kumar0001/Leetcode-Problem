class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        int subsets=1<<n;
        vector<vector<int>>ans;
        for(int x=0;x<subsets;x++){
            vector<int>v;
            for(int i=0;i<n;i++){
                if(x&(1<<i))
                {
                    v.push_back(nums[i]);
            }
            }
            ans.push_back(v);
        }
        return ans;
    }
};