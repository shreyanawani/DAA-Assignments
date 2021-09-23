#include<bits/stdc++.h>
using namespace std;
int found(int x,int arr[],int n)
{
    for(i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            return i;
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
        int ans=found(x,arr,n);
        if(ans!=-1)
        {
            cout<<"Present "<<ans<<"\n";
        }
        else
        {
            cout<<"Not Present"<<" "<<"\n";
        }
    }
}