class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>freq;
         for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;//ye map me element ki frequency ko count karega
         }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>minheap;

        vector<pair<int,int>> frequencyVector;
        for(auto i=freq.begin();i!=freq.end();i++){
            frequencyVector.push_back({i->first,i->second});//map ki keys and values ko frequency vector me dalega
        }
        for(int i=0;i<frequencyVector.size();i++){
            minheap.push({frequencyVector[i].second,frequencyVector[i].first});//this is taki wo frq k hisab se heap bne
            if(minheap.size()>k){//min heap ke top pe smallest element rhengge and if size badhti
                minheap.pop();//then wo top element nikal jayenge
            }
        }
        vector<int>result;
        while(!minheap.empty()){
          result.push_back(minheap.top().second);
        minheap.pop();
        }
        return result;
    }
};