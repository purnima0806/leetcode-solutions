class Solution {
public:
    int trap(vector<int>& height) {
        int l=0,r=height.size()-1;
        int rightmax=height[r];
        int leftmax=height[l];
        int result=0;

        while(l<r){
            if(leftmax<rightmax){
               l++;
               leftmax=max(leftmax,height[l]);
               result+=leftmax-height[l];
            }
            else{
               r--;
               rightmax=max(rightmax,height[r]);
              result+=rightmax-height[r];
            }

        }
        return result;
    }
};