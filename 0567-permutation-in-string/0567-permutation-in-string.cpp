class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()){
            return false;
        }
        int left=0;
        int n=s1.size();
       unordered_map<char,int>count;
       for(int i=0;i<n;i++){
        count[s1[i]]++;//s1 k character ki frequency store krega
       }
       
       for(int r=0;r<s2.size();r++){
        if(count[s2[r]]>0){
            n--;//if s2 k r index ki value s1 k map me exist krti hai to reduce window size
        }
         count[s2[r]]--;//to mark that the character is inside the window
        if(r-left+1>s1.size()){
           if(count[s2[left]]>=0){
            n++;}
            count[s2[left]]++;//its no longer in window to uski freq ko back to normal kr do
            left++;
           
          
        }

         if(n==0){
            return true;
           }

       }
return false;
    }
};
