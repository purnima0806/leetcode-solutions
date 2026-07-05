class Solution{
public:
    int largestRectangleArea(vector<int>& h){
        stack<int> s;
        int n=h.size(),maxArea=0;
        for(int i=0;i<=n;i++){
            int curr=i==n?0:h[i];
            while(!s.empty() && curr<h[s.top()]){
                int height=h[s.top()];
                s.pop();
                int width=s.empty()?i:i-s.top()-1;
                maxArea=max(maxArea,height*width);
            }
            s.push(i);
        }
        return maxArea;
    }
};
