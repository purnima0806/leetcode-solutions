class Solution {
public:
    int search(vector<int>& nums, int taget) {
        int left=0,right=nums.size()-1;
        if(nums.size()==1&&nums[0]==taget) return 0;
        while(left<=right){
           int mid=left+(right-left)/2;
            if(nums[mid]==taget) return mid;
            else if(nums[mid]<taget) left=mid+1;
            else right= mid-1;
        }
        return -1;
    }
};