class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
      int pair=0,left=0;
       map<int ,int>mpp;
        for(int i=0; i<nums.size(); i++){
            mpp[nums[i]]++;
        }
        for(auto it: mpp){
            pair=pair+it.second/2;
                left=left+it.second%2;
        }
        
        return {pair,left};
        
    }
};