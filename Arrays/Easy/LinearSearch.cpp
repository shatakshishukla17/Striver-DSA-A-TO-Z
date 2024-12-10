// https://www.geeksforgeeks.org/problems/who-will-win-1587115621/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=who-will-win

class Solution{
    public:
   int searchInSorted(int arr[], int n, int K) {
    int l = 0;
    int h = n - 1;

    while (l <= h) {
        int mid = l + (h - l) / 2;  
        if (arr[mid] == K) {
            return 1;  // K found
        }

        // If K is greater, ignore left half
        if (arr[mid] < K) {
            l = mid + 1;
        }
        // If K is smaller, ignore right half
        else {
            h = mid - 1;
        }
    }
    return -1;
}

};