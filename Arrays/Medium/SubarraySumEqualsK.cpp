// https://leetcode.com/problems/subarray-sum-equals-k

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
    //    int cnt=0;
    //    int n=nums.size();
    //    for(int i=0;i<n;i++){
    //     int sum=0;
    //       for(int j=i;j<n;j++){
    //         sum+=nums[j];
    //         if(sum==k){
    //             cnt++;            }
    //       }
    //    } 
    //    return cnt;

    //optimal approach
    map<int, int>mpp;
    mpp[0]=1;
    int preSum=0;
    int cnt=0;
    for(int i=0;i<nums.size();i++){
        preSum+=nums[i];
        int remove=preSum-k;
        cnt+=mpp[remove];
        mpp[preSum]+=1;
    }
    return cnt;
    }
};