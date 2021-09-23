#include <bits/stdc++.h>

using namespace std;
void InsertionSort(int arr[],int n)
{
    int comp=0;
    int swap=0;
    for(int i=1;i<n;i++)
    {
        int key=arr[i],co=0;
        int j=i-1;
        while(j>=0 && arr[j]>key)
        {
            co+=1;
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
        comp=comp+co;
        swap=swap+co+1;
    }
    cout<<"The sorted elements are:\n"
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\nNo of comparisions :"<<comp<<"\n";
    cout<<"Swaps :"<<swap<<"\n";
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
        InsertionSort(arr,n);
    }
    return 0;
}