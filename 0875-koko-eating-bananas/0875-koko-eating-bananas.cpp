class Solution{
public:
    bool canEatAll(vector<int>& piles,int h,int k){
        long long totalHours=0;
        for(int i=0;i<piles.size();i++){
            totalHours+=ceil((double)piles[i]/k);//kitta time lagra khane me
          //round up krega upper value k trf
        }
        return totalHours<=h;
    }
    int minEatingSpeed(vector<int>& piles,int h){
        int left=1,right=*max_element(piles.begin(),piles.end());
        while(left<right){
            int mid=left+(right-left)/2;//ek mid speed find krenge
            if(canEatAll(piles,h,mid)){
            right=mid;//tez kha rhi to slow kro
            }
            
            else{
            left=mid+1;//dheere hai to tez kro
            
            } 
        }
        return left;
    }
};
