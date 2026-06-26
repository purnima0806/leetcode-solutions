class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==0) return 0;
        map<char,int>mp;
        int i=0,j=0,maxlength=1;
        while(j < s.length()){
            if(mp.find(s[j])!=mp.end()&&mp[s[j]]>=i){
               i=mp[s[j]]+1;
            }
            maxlength=max(maxlength,j-i+1);
            mp[s[j]]=j;
            j++;
        }
        return maxlength;
    }
};
