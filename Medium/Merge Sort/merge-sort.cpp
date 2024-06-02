//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
    public:
    void merge(int arr[], int low, int mid, int high)
    {
         // Your code here
         int temp[high-low+1 ];
         int k=0;
    int left = low;    
    int right = mid + 1;
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp[k]=arr[left];
            left++;
        }
        else {
            temp[k]=arr[right];
            right++;
        }
        k++;
    }
    while (left <= mid) {
        temp[k]=arr[left];
        left++;
        k++;
    }

    //  if elements on the right half are still left //
    while (right <= high) {
        temp[k]=arr[right];
        right++;
        k++;
    }

    // transfering all elements from temporary to arr //
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }

    
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        if(l>=r)
        return;
        int mid=(l+r)/2;
        mergeSort(arr, l, mid);  // left half
        mergeSort(arr, mid + 1, r); // right half
        merge(arr, l, mid, r);
        //code here
    }
};

//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends