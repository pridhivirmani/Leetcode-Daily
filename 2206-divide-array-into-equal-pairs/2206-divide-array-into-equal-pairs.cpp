class Solution {
public:
    bool divideArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int pair=0;
        for(int i=0; i<nums.size()-1; i=i+2){
            if(nums[i]==nums[i+1]){
                pair++;
            }
        }
        if(pair==(nums.size())/2){
            return true;
        }
        return false;
    }
};