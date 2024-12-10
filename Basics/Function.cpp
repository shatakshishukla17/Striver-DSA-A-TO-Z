//Question: https://www.geeksforgeeks.org/problems/pass-by-reference-and-value/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pass-by-reference-and-value

class Solution {
  public:
    vector<int> passedBy(int a, int &b) {
        // code here
        return {a+1, b+2};
    }
};