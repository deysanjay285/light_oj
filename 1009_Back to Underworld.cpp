#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mx 20005


vector<ll> adj[mx];
bool visited[mx];
ll par[mx];
ll color[mx];
ll black,white;
//ll level[mx];
//ll how_many[mx];

void bfs(ll s,ll clr)
{
    black=0;
    white=0;

    queue<ll> Q;


    visited[s]=1;
    par[s]=s;
    color[s]=clr;
    ll c=0;
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
                c=1;
                visited[v]=1;
                par[v]=u;
                if(color[u]==0)
                {
                    color[v]=1;
                    black++;
                }
                else
                {
                    color[v]=0;
                    white++;
                }
                Q.push(v);
            }
        }
    }
    if(c==1)
        white++;
}

int main()
{
    ll n,t,cases=1,u,v,ans,mxx=-1;
    scanf("%lld",&t);
    while(t--)
    {

        ans=0;
        scanf("%lld",&n);
        for(ll i=0; i<n; i++)
        {
            scanf("%lld %lld",&u,&v);
            ll temp=max(u,v);
            if(temp>=mxx)
                mxx=temp;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        memset(visited,0,sizeof(visited));
        memset(par,0,sizeof(par));
        memset(color,-1,sizeof(color));

        for(ll i=1; i<=mxx; i++)
        {
            bfs(i,0);
//            cout<<"i:"<<i<<endl;
//            cout<<max(black,white)<<endl;
//            for(ll j=1;j<=mxx;j++)
//                cout<<color[j]<<" ";
//            cout<<endl;
            ans+=max(black,white);
        }
        printf("Case %lld: %lld\n",cases++,ans);
        for(ll i=0;i<=mx;i++)
            adj[i].clear();
    }
    return 0;
}
