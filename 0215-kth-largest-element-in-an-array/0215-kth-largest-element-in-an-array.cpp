class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> mx;
        for(int i=0;i<nums.size();i++){
            mx.push(nums[i]);
        }
        for(int i=1;i<k;i++){
            mx.pop();
        }
        return mx.top();
    }
};