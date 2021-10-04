// To find maximum sum subarray from a given array using kadens algorithm 
// Kadane’s algorithm is an iterative dynamic programming algorithm in which we search for a maximum sum subarray within a one-dimensional numeric array.
// Time Complexity: O(n) 
//Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

int MaxSumSub(int arr[],int n){
    int maxSum = 0;
    int currSum = 0;

    for(int i=0; i<n; i++){
        currSum = currSum + arr[i];

        if(currSum > maxSum){
            maxSum = currSum;
        }

        if(currSum < 0){
            currSum = 0;
        }
    }
    return maxSum;
}

int main(){
    int n;
    cout<<"enter number of elements : ";
    cin>>n;
    int arr[n];
    cout<<"enter elements : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }    
    cout<<"max sum of subarray is : "<<MaxSumSub(arr,n)<<endl;
    return 0;
}