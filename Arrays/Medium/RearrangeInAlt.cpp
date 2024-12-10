// https://leetcode.com/problems/rearrange-array-elements-by-sign

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        //OPTIMAL APPROACH
        // int n =nums.size();
        // vector<int>temp(n, 0);
        // int pos=0;
        // int neg=1;
        // for(int i=0;i<n;i++){
        //   if(nums[i]>0){
        //     temp[pos]=nums[i];
        //     pos+=2;
        //   } else{
        //     temp[neg]=nums[i];
        //     neg+=2;
        //   }

        // }
        // return temp;


        //BRUTE FORCE
        int n =nums.size();
        vector<int> pos, neg;
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                pos.push_back(nums[i]);
            } else{
                neg.push_back(nums[i]);
            }
        }
        if(pos.size()>neg.size()){
            for(int i=0;i<neg.size();i++){
                nums[2*i]=pos[i];
                nums[2*i+1]=neg[i];
            }
            int index=neg.size()*2;
            for(int i=neg.size();i<pos.size();i++){
                nums[index]=pos[i];
                i++;
            }
        } else{
            for(int i=0;i<pos.size();i++){
                nums[2*i]=pos[i];
                nums[2*i+1]=neg[i];
            }
            int index=neg.size()*2;
            for(int i=pos.size();i<neg.size();i++){
                nums[index]=pos[i];
                i++;
            }
        }
        return nums;
    }
};