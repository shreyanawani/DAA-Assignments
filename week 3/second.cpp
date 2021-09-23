#include <bits/stdc++.h>

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
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int swaps=0,itr=0;
        for(int i=0;i<n-1;i++)
        {
            int idx=i;
            for(int j=i+1;j<n;j++)
            {
                itr+=1;
                if(arr[idx]>arr[j])
                {
                    idx=j;
                }
            }
            swaps+=1;
            swap(arr[idx],arr[i]);
        }
        cout<<"The sorted elements are:\n";
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<"\nSwaps :"<<swaps<<"\n";
        cout<<"Comparision :"<<itr<<"\n";
        }
        return 0;
}