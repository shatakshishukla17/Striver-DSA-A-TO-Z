// https://www.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=union-of-two-sorted-arrays

class Solution{
    public:
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        vector<int>temp;
        int i=0;
        int j=0;
        while(i<n && j<m){
            if(arr1[i]<=arr2[j]){
                if(temp.size()==0 || temp.back()!=arr1[i]){
                    temp.push_back(arr1[i]);
                }
                i++;
            } else{
                if(temp.size()==0||temp.back()!=arr2[j]){
                    temp.push_back(arr2[j]);
                }
                j++;
            }
        }
        while(i<n){
            if(temp.back()!=arr1[i]){
                temp.push_back(arr1[i]);
            }
            i++;
        }
        while(j<m){
            if(temp.back()!=(arr2[j])){
                temp.push_back(arr2[j]);
            }
            j++;
        }
        return temp;
        
    }
};