class Solution {
public:
    int findMinDifference(vector<string>& arr) {
        vector<int> minutes;
        int mini=INT_MAX;
        for(int i=0;i<arr.size();i++){
            string curr=arr[i];
            int hours=stoi(curr.substr(0,2));
            int mint=stoi(curr.substr(3,2));
            int totalmin=hours*60+mint;
            minutes.push_back(totalmin);
        }
        sort(minutes.begin(),minutes.end());
        int n=arr.size();
        for(int i=0;i<n-1;i++){
            int diff=minutes[i+1]-minutes[i];
            mini=min(mini,diff);
        }
        int lastdiff=(minutes[0]+1440)-minutes[n-1];
        mini=min(mini,lastdiff);
        return mini;
        
    }
};