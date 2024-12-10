// https://leetcode.com/problems/pascals-triangle

class Solution {
public:
    vector<int>generaterows(int row){
        long long ans=1;
        vector<int>answer;
        answer.push_back(1);
        for(int i=1;i<row;i++){
            ans=ans*(row-i);
            ans=ans/i;
            answer.push_back(ans);
        }
        return answer;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i=1;i<=numRows;i++){
           ans.push_back(generaterows(i));
        }
        return ans;
    }
};