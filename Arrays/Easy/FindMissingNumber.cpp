// https://leetcode.com/problems/missing-number

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i=0;
        int n =nums.size();
        while(i<n){
            if(nums[i]!=i){
                return i;
            }
            i++;
        }
        return i;
    }
};