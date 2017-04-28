#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mx 30005






vector< pair<ll,ll> > cost[mx];
vector< pair<ll,ll> >::iterator it;

ll point,maxx,n;



bool visited[mx];
ll level[mx];
ll par[mx];
ll cst[mx];

void bfs(ll s)
{
    queue<ll> Q;
    memset(visited,0,sizeof(visited));
    memset(level,-1,sizeof(level));
    memset(par,0,sizeof(par));
    memset(cst,0,sizeof(cst));

    visited[s]=1;
    level[s]=0;
    par[s]=s;
    cst[s]=0;
    maxx=-1;

    Q.push(s);

    //cout<<endl<<endl;
    while(!Q.empty())
    {
        ll u=Q.front();
        Q.pop();
        it=cost[u].begin();

        for(ll i=0; i< cost[u].size(); i++)
        {
            ll v=it->first;
            if(visited[v]==0)
            {
                cst[v]=cst[u]+it->second;
                visited[v]=1;
                level[v]=level[u]+1;
                par[v]=u;
                Q.push(v);
            }

            it++;
            if(cst[v]>maxx)
            {
                maxx=cst[v];
                point=v;
            }
        }
    }
}

int main()
{
    ll t,cases=1,u,v,wt;
    scanf("%lld",&t);
    while(t--)
    {

        for(ll i=0; i<mx; i++)
        {
            cost[i].clear();
        }
        scanf("%lld",&n);
        for(ll i=0; i<n-1; i++)
        {
            scanf("%lld %lld %lld",&u,&v,&wt);

            cost[u].push_back(make_pair(v,wt));
            cost[v].push_back(make_pair(u,wt));
        }
        bfs(0);
        bfs(point);
        printf("Case %lld: %lld\n",cases++,maxx);

    }

    return 0;
}
