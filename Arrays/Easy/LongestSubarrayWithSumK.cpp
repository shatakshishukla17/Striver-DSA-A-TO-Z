// https://www.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=longest-sub-array-with-sum-k

//ARRAY HAS BOTH POSITIVES AND NEGATIVES
class Solution{
    public:
    int lenOfLongSubarr(int arr[],  int n, int k) 
    { 
        // Complete the function
        map<int, int> preSumMap;
        int sum = 0;
        int maxLen = 0;

        for(int i = 0; i < n; i++) {
            sum += arr[i];

            // Check if the sum equals k
            if (sum == k) 
                maxLen = i + 1;

            // Check if (sum - k) exists in the map
            int rem = sum - k;
            if (preSumMap.find(rem) != preSumMap.end()) {
                int len = i - preSumMap[rem];
                maxLen = max(maxLen, len);
            }

            // Insert sum if not already present in the map
            if (preSumMap.find(sum) == preSumMap.end()) {
                preSumMap[sum] = i;
            }
        }
        return maxLen;
    } 

};