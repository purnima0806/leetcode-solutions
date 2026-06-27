class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0,maxf=0,res=0;
        unordered_map<char,int>count;

        for(int r=0;r<s.size();r++){
            count[s[r]]++;
            maxf=max(maxf,count[s[r]]);

            while((r-l+1)-maxf>k){
                count[s[l]]--;//jo char l index pe tha uski count ko kam kiya
                l++;//window size kam ki
            }
            res=max(res,r-l+1);//maximum length of window ko update kiya in result
        }
        return res;
    }
};