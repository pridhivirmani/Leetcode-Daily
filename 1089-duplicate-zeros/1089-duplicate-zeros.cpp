class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
       vector<int> v;
        for(int i=0 ; i<arr.size() ; i++){
            if(arr[i]==0){
                v.push_back(arr[i]);
                v.push_back(arr[i]);
            }
            else{
                v.push_back(arr[i]);
            }
        }
        int k= (v.size() - arr.size());
        for(int i=0 ; i<k ; i++){
            v.pop_back();
        }
        arr=v;
    }
};