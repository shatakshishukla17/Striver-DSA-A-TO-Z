// Question: https://www.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1


class Solution {
  public:
    int minJumps(vector<int>& arr) {
        // Your code here
        int n = arr.size(), maxInd = 0, nextMaxInd = arr[0], res = 0;
        for ( int i = 0; i<n-1; i++ ){
            if ( maxInd == i ){
                maxInd = max(nextMaxInd, i+arr[i]);
                nextMaxInd = 0;
                res++;
            } else nextMaxInd = max(nextMaxInd, i+arr[i]);
        } return (maxInd >= n-1) ? res : -1;
    }
};