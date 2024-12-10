// https://www.geeksforgeeks.org/problems/selection-sort/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=selection-sort

class Solution
{
    public:
    int select(int arr[], int i)
    {
        // code here such that selectionSort() sorts arr[]
    }
     
    void selectionSort(int arr[], int n)
    {
       //code here
       for(int i=0;i<=n-2;i++){
           int mini=i;
           for(int j=i;j<=n-1;j++){
               if(arr[mini]>arr[j]){
                   mini=j;
               }
           }
           swap(arr[mini], arr[i]);
       }
    }
};