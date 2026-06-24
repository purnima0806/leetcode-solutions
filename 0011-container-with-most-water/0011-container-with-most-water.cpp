class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        long long maxarea=0;
        while(i<j){
            int h=min(height[i],height[j]);
            int w=j-i;
           long long area=h*w;
           if(height[i]<height[j]) {
                i++;
            } else{
                j--;
            }
            maxarea=max(maxarea,area);
        }
        return maxarea;
    }
};