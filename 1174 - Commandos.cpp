#include<bits/stdc++.h>
using namespace std;

#define ll long long

#define mx 150

vector<ll> adj[mx];
bool visited[mx];
ll level[mx];


ll bfs(ll s,ll k)
{
    ll c=0;
    queue<ll> Q;
    memset(visited,0,sizeof(visited));
    memset(level,0,sizeof(level));
    visited[s]=1;
    level[s]=0;
    Q.push(s);
    c++;
    while(!Q.empty())
    {
        ll u=Q.front();
        Q.pop();
        for(ll i=0;i<adj[u].size();i++)
        {
            ll v=adj[u][i];
            if(visited[v]==0)
            {
                visited[v]=1;
                level[v]=level[u]+1;
                Q.push(v);
                c++;
            }

        }
    }
    return c;
}

int main()
{
    ll t,n,r,s,d,cases=1,ans,u,v;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&n,&r);
        for(ll i=0;i<r;i++)
        {
            scanf("%lld %lld",&u,&v);
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        scanf("%lld %lld",&s,&d);
        ans=bfs(s,d);
        printf("Case %lld: %lld\n",cases++,ans);
        for(ll i=0;i<mx;i++)
            adj[i].clear();


    }
    return 0;
}
