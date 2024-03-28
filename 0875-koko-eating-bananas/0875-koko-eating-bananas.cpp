class Solution {
public:
   
        int FindMax(vector<int> & piles ){
            int maxi=INT_MIN;
            int n=piles.size();
            for(int i=0;i<n;i++){
                    maxi=max(maxi,piles[i]);
            }
                return maxi;
            }
        long long totalhours(vector<int>& piles,int h){
                long long TotalH=0;
                for(int i=0;i<piles.size();i++){
                TotalH+= ceil((double)piles[i]/(double)h);
                }
            return TotalH;
            
        }
         int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=10000000000;
        int ans=0;
        while(low<=high){
            int mid=(low+high)/2;
            int reqtime=totalhours(piles,mid);
            if(reqtime<=h){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};