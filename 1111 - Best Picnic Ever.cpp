#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mx 1100

vector<ll> adj[mx];


bool visited[mx];
ll arr[1100];
ll cal[1100];
bool citi[1100][1100];

void bfs(ll s)
{
    ll c=1;
    queue<ll> Q;
    memset(visited,0,sizeof(visited));

    visited[s]=1;
    cal[s]++;
    Q.push(s);
    while(!Q.empty())
    {
        ll u=Q.front();
        Q.pop();
        for(ll i=0; i<adj[u].size(); i++)
        {
            ll v=adj[u][i];
            if(visited[v]==0)
            {
                cal[v]++;
                visited[v]=1;
                Q.push(v);
            }
        }
    }
}

int main()
{
    ll t,k,n,m,u,v,ans,cases=1;
    scanf("%lld",&t);
    while(t--)
    {
        memset(cal,0,sizeof(cal));
        memset(citi,0,sizeof(citi));
        ans=0;
        scanf("%lld %lld %lld",&k,&n,&m);
        for(ll i=1; i<=k; i++)
        {
            scanf("%lld",&arr[i]);
        }
        for(ll j=1; j<=m; j++)
        {
            scanf("%lld %lld",&u,&v);
            if(citi[u][v]==0)
            {
                adj[u].push_back(v);
                citi[u][v]=1;
            }

        }
        for(ll i=1; i<=k; i++)
        {
            bfs(arr[i]);
        }

        for(ll i=1;i<=n;i++)
        {
            //cout<<cal[i]<<" ";
            if(cal[i]==k)
                ans++;
        }
       // cout<<endl;


        printf("Case %lld: %lld\n",cases++,ans);
        for(ll  i=0; i<mx; i++)
            adj[i].clear();

    }
    return 0;
}
