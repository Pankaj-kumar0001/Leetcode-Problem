class Solution {
public:
    int myAtoi(string s) {
        int n=s.length();
        int sign=1;
        int i=0;
        while(i<n && s[i]==' '){
            i++;
        }
        s=s.substr(i);
        int maxi=INT_MAX;
        int mini=INT_MIN;
        long ans=0;
        if(s[0]=='-'){
            sign=-1;
        }
        i=(s[0]=='-'||s[0]=='+')?1:0;
        while(i<n){
            if(s[i]==' '|| !isdigit(s[i])){
                break;
            }
            ans=ans*10+(s[i]-'0');
            if(sign==-1 && ans*-1<mini) return mini;
            if(sign==1 && ans>maxi) return maxi;
            i++;
            
        }
       return (int)(ans*sign);
        
    }
};