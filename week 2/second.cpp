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
        
    int ans[3];
    int f=0;
    for(int i=n-1;i>=2&&f==0;i--)
    {
        int s=0,e=i-1;
        while(s<e)
        {
            if(arr[s]+arr[e]==arr[i])
            {
                ans[0]=s+1;
                ans[1]=e+1;
                ans[2]=i+1;
		f=1;
                break;
            }
            else if(arr[s]+arr[e]<arr[i])
            {
                s++;
            }
            else
            {
                e--;
            }
        }
    }
    if(f==1)
    {
        cout<<"Sequence is Present\n";
        for(auto i:ans)
            cout<<i<<" ";
        cout<<"\n";
    }
    else
    {
        cout<<"Sequence is not Present \n";
    }
    return 0;
}