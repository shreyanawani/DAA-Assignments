#include <bits/stdc++.h>

using namespace std;

int BS(int x,int arr[], int low, int high)
{
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==x)
        {
            return 1;
        }
        else if(arr[mid]>x)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
        
    }
    return 0;
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
        int val,res=0;
        cin>>val;
        sort(arr,arr+n);
        for(int i=0;i<n;i++)
        {
            if(i==0||arr[i]!=arr[i-1])
            {
                res+=BS(arr,i+1,n-1,arr[i]+val);
            }
        }
    cout<<res<<"\n";
    }
    return 0;
}