class Solution {
public:
    int compareVersion(string v1, string v2) {
        int i=0,j=0;
        while(i<v1.size()||j<v2.size()){
            int x=0,y=0;
            while(i<v1.size() && v1[i]!='.'){
                x=x*10+(v1[i]-'0');
                i++;
            }
            while(j<v2.size() && v2[j]!='.'){
                 y=y*10+(v2[j]-'0');
                j++;
            }
            if(x<y){
                return -1;
            }
            else if(x>y){
                return 1;
            }
            i++;
            j++;
        }
        return 0;
    }
};