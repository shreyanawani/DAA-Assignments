#include <bits/stdc++.h>

using namespace std;
int graph[300][300];
bool dfs(int source,int destination,bool vis[],int n)
{
    vis[source]=1;
    if(source==destination)
        return true;
    for(int i=1;i<=n;i++)
    {
        if(vis[i]==false&&graph[source][i]==1)
        {
            if(dfs(i,destination,vis,n))
                return true;
        }
    }
    return false;
}
int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                cin>>graph[i][j];
            }
        }
        bool vis[n+1];
        memset(vis,0,sizeof vis);
        int source,destination;
        cin>>source>>destination;
        bool ans=dfs(source,destination,vis,n);
        if(ans)
        {
            cout<<"Path exist\n";
        }
        else
        {
            cout<<"Path do not exist\n";
        }
    }
    return 0;
}