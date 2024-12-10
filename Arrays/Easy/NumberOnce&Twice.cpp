// https://leetcode.com/problems/single-number

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // unordered_set<int>mpp;
        // int n=nums.size();
        // for(int i=0;i<n;i++){
        //     if(mpp.find(nums[i])==mpp.end()){
        //         mpp.emplace(nums[i]);
        //     } else{
        //         mpp.erase(mpp.find(nums[i]));
        //     }
        // }
        //  int result = *mpp.begin();
        // return result;

        //USING XOR;
        int result=0;
        for(int i=0;i<nums.size();i++){
            result=result^nums[i];
        }
        return result;
    }
};