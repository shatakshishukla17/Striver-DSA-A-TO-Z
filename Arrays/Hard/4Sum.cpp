// https://leetcode.com/problems/4sum

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>answer;
        int n =nums.size();
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            for(int l=n-1;l>=0;l--){
                if(l!=n-1 && nums[l]==nums[l+1]) continue;
                int j=i+1;
                int k=l-1;
                while(j<k){ 
                long long sum = static_cast<long long>(nums[i])+nums[j]+nums[k]+nums[l];
                    if(sum<target){
                        j++;
                    } else if(sum>target){
                        k--;
                    }else{
                        vector<int>temp={nums[i], nums[j], nums[k], nums[l]};
                        answer.push_back(temp);
                        j++;
                        k--;
                        while(j<k && nums[j]==nums[j-1]) j++;
                        while(j<k && nums[k+1]==nums[k]) k--;
                    }
                }
            }
        }
        return answer;
    }
};