#include <bits/stdc++.h>

using namespace std;
int swaps=0,comp=0;
int partition(int arr[],int l,int h)
{
    int p=arr[h];
    int i=l-1,j=l;
    for (j=l;j<h;j++)
    {
        comp++;
        if(arr[j]<=p)
        {
            swaps+=1;
            i+=1;
            swap(arr[i],arr[j]);
        }
    }
    swaps+=1;
    i+=1;
    swap(arr[i],arr[j]);
    return i;
}
int kthsmallest(int arr[],int s,int e,int k)
{
    int p=partition(arr,s,e);
    if(p==k-1)
        return arr[p];
    else if(p<k-1)
        return kthsmallest(arr,p+1,e,k);
    else
        return kthsmallest(arr,s,p-1,k);
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
        int k;
        cin>>k;
        cout<<kthsmallest(arr,0,n-1,k);
    }
    return 0;
}