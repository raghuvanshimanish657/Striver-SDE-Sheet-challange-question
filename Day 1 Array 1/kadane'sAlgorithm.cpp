#include<bits/stdc++.h>
long long maxSubarraySum(int arr[], int n)
{
    long long maxSum = arr[0];
    long long currSum =0;
    for(auto i=0; i<n;i++){
        currSum += arr[i];
        if(currSum<arr[i])
            currSum=arr[i];
        if(currSum>maxSum)
            maxSum=currSum;
    }
    if(maxSum<0)
        return 0;
    return maxSum;
}