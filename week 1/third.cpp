#include <bits/stdc++.h>

using namespace std;

void BinarySearch(int arr[], int low, int high, int val,int co)
{
    int flag=0;
    while(low<=high)
    {
        int mid=(low+high)/2;
        ++co;
        if(arr[mid]==val)
        {
            flag=1;
            cout<<"Present "<<co<<"\n";
            break;
        }
        else if(arr[mid]>val)
        {
            high=mid-1;
        }
        else 
        {
            low=mid+1;
        }
    }
   if(flag!=1)
    {
        cout<<"Not Present\n";
    }
}
void exponentialSearch(int arr[], int n, int val)
{
    int cmp=1;
    if (arr[0] == val)
    {
        cout << "Present 1\n";
        return;
    }
    int i = 1;
    while (i < n && arr[i] < val)
    {
        cmp++;
        i *= 2;
    }
    BinarySearch(arr, i/2 ,min(n-1,i),val,cmp);
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
        exponentialSearch(arr,n,x);
    }
    return 0;
}