class Solution {
public:
    int lowerBound(vector<int>& nums, int target) {
	// Write your code here
        int n=nums.size();
	int low=0;
	int high=n-1;
	int mid=0;
	int ans=n;
   while(low<=high){
	   mid=(low+high)/2;
	   if(nums[mid]>=target){
		   ans=mid;
		   high=mid-1;
	   }
	   else{
		   low=mid+1;
	   }
	   }
     return ans;

   }
    int upperBound(vector<int>& nums, int target) {
	// Write your code here
        int n=nums.size();
	int low=0;
	int high=n-1;
	int mid=0;
	int ans=n;
   while(low<=high){
	   mid=(low+high)/2;
	   if(nums[mid]>target){
		   ans=mid;
		   high=mid-1;
	   }
	   else{
		   low=mid+1;
	   }
	   }
     return ans;

   }
    vector<int> searchRange(vector<int>& nums, int target) {
        int lb=lowerBound(nums,target);
        int up=upperBound(nums,target);
        if(lb==nums.size()||nums[lb]!=target){
          return {-1,-1};
        }
        return {lb,up-1};
    }
};