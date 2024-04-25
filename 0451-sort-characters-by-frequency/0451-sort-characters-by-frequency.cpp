class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mpp;
        priority_queue<pair<int,char>> pq;
        for(int i=0;i<s.size();i++){
            mpp[s[i]]++;
        }
        string ans="";
        for(auto it:mpp){
            pq.push({it.second,it.first});
        }
        while(!pq.empty()){
            int n=pq.top().first;
            while(n--){
                ans+=pq.top().second;
            }
            pq.pop();
        }
        return ans;
    }
};