#include <bits/stdc++.h>

using namespace std;

int found(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        if(arr[i]==arr[i-1])
        {
            return 1;
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
        int cmp=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int ans=found(arr,n);
        if(ans!=-1)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
}