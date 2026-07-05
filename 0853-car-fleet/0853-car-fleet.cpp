class Solution{
public:
    int carFleet(int target,vector<int>&position,vector<int>&speed){
        int n=position.size();
        vector<pair<int,float>>cars;
        for(int i=0;i<n;i++){
            float time=(float)(target-position[i])/speed[i];
            cars.push_back({position[i],time});//har car ka target reach krne ka time
        }
        sort(cars.begin(),cars.end());
        int fleets=0;
        float lastTime=0.0f;
        for(int i=n-1;i>=0;i--){
            if(cars[i].second>lastTime){
                fleets++;
                lastTime=cars[i].second;
            }
        }
        return fleets;
    }
};
