#include <bits/stdc++.h>
using namespace std;
void selectionSort(vector<int>&arr)
{
    int n=arr.size();
    for(int i=0;i<n;++i)
    {
        int minIndex=i;
        for(int j=i+1;j<n;++j)
        {
            if(arr[j]<arr[minIndex])
            {
                minIndex=j;
            }
            swap(arr[i],arr[minIndex]);
        }
    }
}
void printSortedArray(vector<int>&arr)
{
    for(int i=0;i<arr.size();++i)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    vector<int>arr={2,5,7,8,3,10,4};
    selectionSort(arr);
    printSortedArray(arr);
    return 0;
}