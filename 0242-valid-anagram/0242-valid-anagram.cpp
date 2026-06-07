class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s.length()!=t.length()) return false;

        for(int i=0;i<t.length();i++){
            if(s[i]==t[i]) continue;
            else return false;
        }
        return true;
    }
};