// https://www.geeksforgeeks.org/problems/max-sum-in-sub-arrays0824/0?category&utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=max-sum-in-sub-arrays

class Solution{
    public:
        long long pairWithMaxSum(long long arr[], long long N)
    {
    if (N < 2) return LLONG_MIN; 

    long long maxi = LLONG_MIN;  
    
    for (long long i = 0; i < N - 1; ++i) {
        long long sum = arr[i] + arr[i + 1]; 
        if (sum > maxi) {
            maxi = sum;  
        }
    }
    return maxi;
    }
}