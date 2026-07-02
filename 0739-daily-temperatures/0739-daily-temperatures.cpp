class Solution {
public:
    vector<int>dailyTemperatures(vector<int>&temperatures){
        int n=temperatures.size();
        vector<int>result(n,0);//n size k sab 0
        stack<int>stack; 
        
        for(int i=0;i<n;i++){
            while(!stack.empty()&&temperatures[i]>temperatures[stack.top()]){
                int prevIndex=stack.top();//jo previous temp tha usse compare kiya
                stack.pop();
                result[prevIndex]=i-prevIndex;//uske index pe value k=jitne din baad aaya
            }//else 0
            stack.push(i);//index push krenge na ki value
        }
        return result;
    }
};
