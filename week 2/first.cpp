#include <bits/stdc++.h>

using namespace std;

int BinarySearchFirst(int x,int arr[], int low, int high)
{
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]>x)
        {
            high=mid-1;
        }
        else if(arr[mid]<x)
        {
            low=mid+1;
        }
        else
        {
            if(mid==0||arr[mid-1]!=arr[mid])
                return mid;
            else
            {
                high=mid-1;
            }
        }
    }
    return -1;
}
int BinarySearchLast(int x,int arr[], int low, int high)
{
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]>x)
        {
            high=mid-1;
        }
        else if(arr[mid]<x)
        {
            low=mid+1;
        }
        else
        {
            if(mid==high||arr[mid+1]!=arr[mid])
                return mid;
            else
            {
                low=mid+1;
            }
        }
    }
    return -1;
}
int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int x;
        cin>>x;
        int first_idx=BinarySearchFirst(x,arr,0,n-1);
        int second_idx=BinarySearchLast(x,arr,0,n-1);
        if(first_idx!=-1)
        {
            cout<<"Present, no of repetition "<<second_idx-first_idx+1<<\n";
        }
        else
        {
           cout<<"Not Present\n";
        }
    }
    return 0;
}