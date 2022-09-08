// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        int step = 0;
        int ptr = 0;
        for (int i = 0; i < n; ++i) {
            ptr = ptr + arr[i];
            if (ptr >= n - 1) {
                return step;
            }
            step++;
        }
        return -1;
    }
};


// { Driver Code Starts.

int main()
{
    int arr[] = {1,4,3,2,6,7};
    int n = 10;
    Solution obj;
    cout<<obj.minJumps(arr, n)<<endl;
    return 0;
}
  // } Driver Code Ends
