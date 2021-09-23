#include <bits/stdc++.h>

using namespace std;
int inv=0,int cmp=0;
void Merge(int arr[],int s,int e,int mid)
{
    int a=abs(s-mid)+1,b=e-mid;
    int l[a],r[b];
    for(int i=0;i<a;i++)
    {
        l[i]=arr[s+i];
    }
    for(int i=0;i<b;i++)
    {
        r[i]=arr[mid+1+i];
    }
    int i=0,j=0,k=s;
    while(j<b && i<a)
    {
        cmp+=1;
        if(a[i]<=b[j])
        {
            arr[k++]=a[i];
            i++;
        }
        else
        {
            inv+=(n-i);
            arr[k++]=b[j];
            j++;
        }
    }
    while(i<n)
    {
        arr[k++]=a[i++];
    }
    while(j<m)
    {
        arr[k++]=b[j++];
    }
}
void MergeSort(int arr[],int s,int e)
{
    if(s+1<=e)
    {
        int mid=(s+e)/2;
        MergeSort(arr,s,mid);
        MergeSort(arr,mid+1,e);
        Merge(arr,s,e,mid);
    }
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
        
        MergeSort(arr,0,n-1);
        cout<<"The sorted elements are:"
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<"\nInversion :"<<inv<<"\n";
        cout<<"Comparisions :"<<cmp<<"\n";
    }
    return 0;
}