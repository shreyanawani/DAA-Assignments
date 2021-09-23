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
          int val;
          cin>>val;
          sort(arr,arr+n);
          int flag=0;
          int s=0,e=n-1;
          while(s<=e)
          {
               if(arr[s]+arr[e]==val)
               {
                    cout<<arr[s]<<" "<<arr[e]<<"\n";
                    s++;
                    e--;
                    flag=1;
               }
               else if(arr[s]+arr[e]<val)
               {
                    s++;
               }
               else
               {
                    e--;
               }
          }
          if(flag==0)
          {
               cout<<"No Such Pair\n";
          }
    }
    return 0;
}