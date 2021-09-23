#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int cmp=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int x;
        cin>>x;
        int low=0,high=n-1,flag=0,c=0;
        while(low<=high)
        {
            int mid=(low+high)/2;
            ++c;
            if(arr[mid]==x)
            {
                flag=1;
                 cout<<"Present "<<cmp<<"\n";
                break;
            }
            else if(arr[mid]<x)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        if(flag!=1)
            cout<<"Not Present"<<" "<<"\n";
    }
}