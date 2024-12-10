// https://www.geeksforgeeks.org/problems/frequency-of-array-elements-1587115620/0

class Solution{
    public:
    void frequencyCount(vector<int>& arr,int N, int P)
    { 
        // code here
        unordered_map<int, int>mpp;
        for(auto i : arr){
            mpp[i]++;
        }
        for(int i=1;i<=N;i++){
            arr[i-1]=mpp[i];
        }
        
    }
};