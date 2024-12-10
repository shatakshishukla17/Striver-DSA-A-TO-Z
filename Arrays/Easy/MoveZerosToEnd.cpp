// https://leetcode.com/problems/move-zeroes

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return;
        vector<int>temp;
        temp.reserve(n);
        int i=0;
        int count=0;
        while(i<n){
            if(nums[i]==0){
                i++;
                count++;
            } else{
                temp.push_back(nums[i]);
                i++;
            }
        }
        if(count==0){
            return;
        }
        while(count>0){
            temp.push_back(0);
            count--;
        }

        for(int i=0;i<n;i++){
            nums[i]=temp[i];
        }
    }
};