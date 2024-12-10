// https://www.geeksforgeeks.org/problems/merge-sort/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=merge-sort

class Solution
{
    public:
     void merge(int arr[], int l, int m, int r)
    {
         // Your code here
        //  vector<int> temp;
         int temp[r];
         int ti=0;
         int left=l;
         int right=m+1;
         
         while(left <=m && right <=r){
             if(arr[left]<=arr[right]){
                 temp[ti]=arr[left];
                 left++;
                 ti++;
             }
             else{
                
                 temp[ti]=arr[right];
                 right++;
                 ti++;
             }
         }
         while(left <=m ){
            
                 temp[ti]=arr[left];
                 left++;
                 ti++;
         }
             while( right <=r){
                 temp[ti]=arr[right];
                 right++;
                 ti++;
             }
             
             for(int i=l;i<=r;i++){
                 arr[i]=temp[i-l];
             }
         
         
         
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        if(l>=r) 
        return;
        
        int mid=(l+r)/2;
        
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        
        merge(arr,l,mid,r);
        
    }
};