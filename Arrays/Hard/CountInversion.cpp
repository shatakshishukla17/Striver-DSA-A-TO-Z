// https://www.geeksforgeeks.org/problems/inversion-of-array-1587115620/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=inversion-of-array

class Solution {
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long merge(long long arr[], int low, int mid, int high){
        vector<long long>temp;
        int left=low;
        int right=mid+1;
        long long cnt=0;
        while(left<=mid && right<=high){
            if(arr[left]<=arr[right]){
                temp.push_back(arr[left]);
                left++;
            } else{
                temp.push_back(arr[right]);
                cnt+=(mid-left+1);
                right++;
            }
        }
        while(left<=mid){
            temp.push_back(arr[left]);
            left++;
        }
        while(right<=high){
            temp.push_back(arr[right]);
            right++;
        }
        for(int i=low;i<=high;i++){
            arr[i]=temp[i-low];
        }
        return cnt;
    }
    
    long long mergeSort(long long arr[], int low, int high){
        if(low>=high) return 0;
        int mid = low + (high - low) / 2;
        long long cnt = 0;
        cnt += mergeSort(arr, low, mid);
        cnt += mergeSort(arr, mid + 1, high);
        cnt += merge(arr, low, mid, high);

        return cnt;
    }
    long long int inversionCount(int N, long long arr[]) {
        // Your Code Here
        return mergeSort(arr, 0, N-1);
        
        
    }
};