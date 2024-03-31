class Solution {
public:
    int possible(vector<int>& nums,int num){
        int TotalN=0;
        for(int i=0;i<nums.size();i++){
        TotalN+=ceil((double)nums[i]/(double)num);
    }
        return TotalN;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1;
        int high=*max_element(nums.begin(),nums.end());
        while(low<=high){
            int mid=(low+high)/2;
            int res=possible(nums,mid);
            if(res>threshold){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low;
    }
};