class Solution {
public:
//1   2 3 4 5
//0   1 2 3 4
//i-1 i
//0,3,7,2,5,8,4,6,0,1
//0 0 1 2 3 4 5 6 7 8

    int longestConsecutive(vector<int>& nums) {
        if(!nums.size()) return 0;
        sort(nums.begin(),nums.end());
        int maxlength=1,smaller=INT_MIN, count=1;
        for(int i=0;i<nums.size();i++){
           if(nums[i]==smaller) continue;
            if(nums[i]-1==smaller){
                count+=1;
                smaller=nums[i];
            }
            else if(nums[i]-1!=smaller){
                count=1;
                smaller=nums[i];
            }
            
            maxlength=max(maxlength,count);
        }
        return maxlength;
    }
};