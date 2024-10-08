class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> mp;
        int sum=0;
        int maxi=0;
        int cnt=0;
        for(int i=0;i<n;i++){
             sum+=nums[i];
            if(sum==k){
             maxi=i+1;
                cnt++;
            }
            int left=sum-k;
            if(mp.find(left)!=mp.end()){
                cnt+=mp[left];
            }
          mp[sum]++;
        }
        return cnt;
    }
};