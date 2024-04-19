class Solution {
public:
    int findMinDifference(vector<string>& arr) {
        vector<int> minutes;
        int n=arr.size();
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            string curr=arr[i];
            int hours=stoi(curr.substr(0,2));
            int min=stoi(curr.substr(3,2));
            int totalmin=hours*60+min;
            minutes.push_back(totalmin);
        }
        sort(minutes.begin(),minutes.end());
        for(int i=0;i<n-1;i++){
        int diff=minutes[i+1]-minutes[i];
           ans=min(ans,diff);
            
        }
          int lastdiff=(minutes[0]+1440)-minutes[n-1];
          ans=min(ans,lastdiff);
        return ans;
        
    }
};