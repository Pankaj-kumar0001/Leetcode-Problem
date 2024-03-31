class Solution {
public:
    int funct(vector<int>& weights,int capacity){
        int day=1;
        int load=0;
        for(int i=0;i<weights.size();i++){
            if(weights[i]+load>capacity){
                day=day+1;
                load=weights[i];
            }
            else{
                load+=weights[i];
            }
        }
        return day;
    }
    int shipWithinDays(vector<int>& weights, int days) {
         int low = *max_element(weights.begin(), weights.end());
    int high = accumulate(weights.begin(), weights.end(), 0);
        while(low<=high){
            int mid=(low+high)/2;
            int reqdays=funct(weights,mid);
             if(reqdays>days){
                 low=mid+1;
             }  
            else{
                high=mid-1;
            }
            
                
                
            }
        
    return low;
        
    }
};