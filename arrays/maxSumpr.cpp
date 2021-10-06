#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // int maxSum = INT_MIN;
    // for(int i=0 ;i<n;i++){
    //     for(int j=i;j<n;j++){
    //         int sum=0;
    //         for(int k=i;k<=j;k++){
    //             sum+=arr[k];
    //         }
    //         maxSum=max(maxSum,sum);
    //     }
    // }
    // cout<<maxSum<<" ";

    //time complexity O(n^3)

    //cumulative sumarray; time complexity O(n^2)

    // int currsum[n + 1];
    // currsum[0] = 0;

    // for (int i = 1; i <= n; i++)
    // {
    //     currsum[i] = currsum[i - 1] + arr[i - 1];
    // }
    // int maxSum = INT_MIN;

    // for (int i = 1; i <= n; i++)
    // {
    //     int sum = 0;
    //     for (int j = 0; j < i; j++)
    //     {
    //         sum = currsum[i] - currsum[j];
    //         maxSum = max(sum, maxSum);
    //     }
    // }
    // cout << maxSum << " ";
    
    
    // kadane's algorithm for time complexity O(n)

    int currSum =0;
    int maxSum = INT_MIN;

    for(int i=0;i<n;i++){
        currSum+=arr[i];
        if(currSum<0){
            currSum=0;
        }
        maxSum=max(maxSum,currSum);
    }
    cout<<maxSum;

    return 0;

}