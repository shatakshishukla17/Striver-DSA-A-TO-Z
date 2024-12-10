// https://leetcode.com/problems/3sum

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        // set<vector<int>>st;
        // for(int i=0;i<nums.size();i++){
        //     set<int>hashset;
        //     for(int j=i+1;j<nums.size();j++){
        //         int k=-(nums[i]+nums[j]);
        //         if(hashset.find(k)!=hashset.end()){
        //             vector<int>temp = {nums[i], nums[j], k};
        //             sort(temp.begin(), temp.end());
        //             st.insert(temp);
        //         }
        //         hashset.insert(nums[j]);
        //     }
        // }
        // vector<vector<int>>answer(st.begin(), st.end());
        // return answer;

        vector<vector<int>>answer;
        sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size();i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int j=i+1;
            int k=nums.size()-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum>0){
                    k--;
                } else if(sum<0){
                    j++;
                } else{
                    vector<int>temp={nums[i], nums[j], nums[k]};
                    answer.push_back(temp);
                    j++;
                    k--;
                    while(j<k && nums[j]==nums[j-1]) j++;
                    while(j<k && nums[k]==nums[k+1]) k--;
                }
            }
        }
        return answer;
    }
};