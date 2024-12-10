// https://www.geeksforgeeks.org/problems/largest-subarray-with-0-sum/1?category%5B%5D=Hash&company%5B%5D=Amazon&page=1&query=category%5B%5DHashcompany%5B%5DAmazonpage1company%5B%5DAmazoncategory%5B%5DHash&utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=largest-subarray-with-0-sum

/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        map<int, int>hashmap;
        int maxi=0;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=A[i];
            if(sum==0){
                maxi=i+1;
            } else {
                if(hashmap.find(sum)!=hashmap.end()){
                    maxi=max(maxi, i-hashmap[sum]);
                } else{
                    hashmap[sum]= i;
                }
            }
            
        }
        return maxi;
        
    }
};