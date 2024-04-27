class Solution {
public:
    int compress(vector<char>& s) {
       int n=s.size();
        int index=0;
        int i=0;
        while(i<n){
            int cnt=0;
            char curr=s[i];
            while(i<n && s[i]==curr){
                cnt++;
                i++;
            }
            s[index]=curr;
            index++;
        
        if(cnt>1){
            string cur_str=to_string(cnt);
            for(char &ch:cur_str){
                s[index]=ch;
                index++;
            }
        }
        }
        return index;
    }
};