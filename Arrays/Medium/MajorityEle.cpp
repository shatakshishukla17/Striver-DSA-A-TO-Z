// https://leetcode.com/problems/majority-element

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // map<int, int>mpp;
        // for(int i=0;i<nums.size();i++){
        //     mpp[nums[i]]++;
        // }
        // for(auto it: mpp){
        //     if(it.second>(nums.size()/2)){
        //         return it.first;
        //     }
        // }
        // return 0;
        
        //MOORES VOTING ALGO
        int count=0;
        int ele;
        for(int i=0;i<nums.size();i++){
            if(count==0){
                count=1;
                ele=nums[i];
            } else if(nums[i]==ele){
                count++;
            } else{
                count--;
            }
        }
        int count1=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==ele)
                count1++;
        }
        if(count1>(nums.size()/2)){
            return ele;
        }
        return -1;
    }
};