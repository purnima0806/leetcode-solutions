class Solution {
public:
    vector<int> solve(vector<int>& nums) {
           
        int n=nums.size();
         vector<int>result(n);

     vector<int>left(nums.size());
     vector<int>right(nums.size());
     for(int i=0;i<nums.size();i++){
        if(i==0) left[i]=1;
        else{
            
            left[i]=left[i-1]*nums[i-1];
        }
     }
     
     for(int i=n-1;i>=0;i--){
        if(i==n-1) right[n-1]=1;
        else{
            int num=right[i+1]*nums[i+1];
            right[i]=num;
        }
     }
     for ( int i=0;i<n;i++){
        result[i]=left[i]*right[i];
     }
     return result;
    }
    
    vector<int> productExceptSelf(vector<int>& nums) {
        return solve(nums);
    }
};