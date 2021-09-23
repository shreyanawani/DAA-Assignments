#include <bits/stdc++.h>

using namespace std;
int cmp=0,swaps=0;
int partition(int arr[],int l,int h)
{
    int p=arr[h];
    int i=l-1;
    for (j=l;j<h;j++)
    {
        cmp++;
        if(arr[j]<=p)
        {
            i+=1;
            swaps+=1;
            swap(arr[i],arr[j]);
        }
    }
    swaps++;
    i++;
    swap(arr[i],arr[j]);
    return i;
}
void QuickSort(int arr[],int s,int e)
{
    if(s>=e)
        return;
    int p=partition(arr,s,e);
    QuickSort(arr,s,p-1);
    QuickSort(arr,p+1,e);
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
        QuickSort(arr,0,n-1);
        cout<<"The sorted array is:\n";
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<"\nSwaps :"<<swaps<<"\n";
        cout<<"Comparisions :"<<comp<<"\n";
    }
    return 0;
}