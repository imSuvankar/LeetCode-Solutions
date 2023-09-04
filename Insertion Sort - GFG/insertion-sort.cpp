//{ Driver Code Starts
// C program for insertion sort
#include <stdio.h>
#include <math.h>

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends

#include <bits/stdc++.h>

class Solution
{
    public:
    void insertionSort(int arr[], int n)
    {
        for(int i = 1; i < n; i++) {
            int j = i;
            while(j > 0 && arr[j] < arr[j-1]) {
                std::swap(arr[j], arr[j-1]);
                j--;
            }
        }
    }
};

//{ Driver Code Starts.
int main()
{
    int arr[1000],n,T,i;

    scanf("%d",&T);

    while(T--){

    scanf("%d",&n);

    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.insertionSort(arr, n);
    printArray(arr, n);
    }
    return 0;
}

// } Driver Code Ends