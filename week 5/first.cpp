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
        string str;
        cin>>str;
        int freq[26];
        for(int i=0;i<26;i++)
            fre[i]=0;
        for(int i=0;i<n;i++)
        {
            freq[str[i]-'a']++;
        }
        int ind=0,maxm=0;
        for(int i=0;i<26;i++)
        {
            if(freq[i]>maxm)
            {
                maxm=freq[i];
                ind=i;
            }
        }
        if(max1>1)
        {
            char ch=ind+'a';
            cout<<"Duplicate found"<<ch<<" "<<maxm<<"\n";
        }
        else
        {
            cout<<"No Duplicates found\n";
        }
    }
    return 0;
}