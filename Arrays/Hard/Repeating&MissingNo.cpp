// https://www.geeksforgeeks.org/problems/find-missing-and-repeating2512/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=find-missing-and-repeating

class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        int hash[n+1]={0};
        for(int i=0;i<n;i++){
            hash[arr[i]]++;
        }
        int repeating=-1;
        int missing=-1;
        for(int i=1;i<=n;i++){
            if(hash[i]==2) repeating=i;
            if(hash[i]==0) missing=i;
            if(repeating !=-1 && missing!=-1){
                break;
            }
        }
        
        return {repeating, missing};
        
        
        //optimal approach
        // long long sum=0;
        // long long sum2=0;
        // for(int i=0;i<n;i++){
        //     sum+=arr[i];
        //     sum2+=(long long)arr[i]*arr[i];
        // }
        // long long sumN= (long long)n*(n+1)/2;
        // long long sum2N=(long long)n*(n+1)*(2*n+1)/6;
        // long long a=sum-sumN;
        // long long b=sum2-sum2N;
        // long long c=b/a;
        // long long missing = (a+c)/2;
        // long long repeat=c-missing;
        // return {static_cast<int>(missing), static_cast<int>(repeat)};
        
        }
};