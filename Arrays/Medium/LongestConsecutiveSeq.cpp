// https://leetcode.com/problems/longest-consecutive-sequence/

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        sort(nums.begin(), nums.end());
        int longest=1;
        int cnt=0;
        int lastSmaller=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]-1==lastSmaller){
                cnt++;
                lastSmaller=nums[i];
            } else if(nums[i]!=lastSmaller){
                cnt=1;
                lastSmaller=nums[i];
            }
            longest=max(longest, cnt);
        }
        return longest;
    }
};