// https://www.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=leaders-in-an-array

class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(int n, int arr[]) {
        // Code here
        vector<int>ans;
        int maxi=INT_MIN;
        for(int i=n-1; i>=0;i--){
            if(arr[i]>=maxi){
                ans.push_back(arr[i]);
            }
            maxi=max(maxi, arr[i]);
        }
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};