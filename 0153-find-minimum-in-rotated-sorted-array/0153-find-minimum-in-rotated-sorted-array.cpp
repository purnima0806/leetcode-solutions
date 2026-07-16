class Solution{
public:
    int findMin(vector<int> &nums){
        int left=0;
        int right=nums.size()-1;
        while(left<right){
            int mid=left+(right-left)/2;
            if(nums[mid]>nums[right]){//aryra ke last se check krwaya oehle
               left=mid+1;//agar bada hai to right side me hoga 
            } 
            else {
                right=mid;//nahi hai to left side me
                }
        }
        return nums[left];
    }
};
