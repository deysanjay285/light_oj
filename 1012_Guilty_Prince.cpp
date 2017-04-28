#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mx 410

vector<ll> adj[mx];

ll level[mx];
ll par[mx];
bool visited[mx];

ll w,h;

ll bfs(ll s)
{
    ll c=0;

    memset(level,-1,sizeof(level));
    memset(par,0,sizeof(par));
    memset(visited,0,sizeof(visited));

    queue<ll> Q;
    par[s]=s;
    level[s]=0;
    visited[s]=1;
    Q.push(s);
    //cout<<endl<<endl;
    while(!Q.empty())
    {

        ll u=Q.front();
        //cout<<"u:"<<u<<endl;
        Q.pop();
        for(ll i=0; i<adj[u].size(); i++)
        {

            ll v=adj[u][i];
            if(visited[v]==0)
            {
                 c++;
              //  cout<<v<<" ";

                level[v]=level[u]+1;
                par[v]=u;
                visited[v]=1;
                Q.push(v);
            }
            //cout<<v<<" "<<level[v]<<endl;
        }
        //cout<<endl;
    }
    for(ll i=1;i<=mx;i++)
        adj[i].clear();
    return c;
}

bool invalid(ll x,ll y)
{
    if(x<=0||y<=0||x>h||y>w)
        return 0;
    return 1;
}

int main()
{
    ll t,s,cases=1;
    char arr[30][30];
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&w,&h);
        getchar();
        for(ll i=1; i<=h; i++)
        {
            for(ll j=1; j<=w; j++)
            {
                scanf("%c",&arr[i][j]);
                if(arr[i][j]=='@')
                    s=w*(i-1)+j;
            }

            getchar();
        }
        bool temp;
        for(ll i=1; i<=h; i++)
        {
            for(ll j=1; j<=w; j++)
            {
            //    cout<<" i,j : "<<i<<" "<<j<<" "<<endl;
                temp=invalid(i-1,j);
                if(temp==1)
                {
                    if(arr[i][j]!='#'&&arr[i-1][j]!='#')
                    {
          //             cout<<w*(i-2)+j<<" "<<w*(i-1)+j<<endl;
                        adj[w*(i-2)+j].push_back(w*(i-1)+j);
                    }
                }

                temp=invalid(i,j-1);
                if(temp==1)
                {
                    if(arr[i][j]!='#'&&arr[i][j-1]!='#')
                    {
        //                cout<<w*(i-1)+j-1<<" "<<w*(i-1)+j<<endl;
                        adj[w*(i-1)+j-1].push_back(w*(i-1)+j);
                    }
                }
                temp=invalid(i,j+1);
                if(temp)
                {
                    if(arr[i][j]!='#'&&arr[i][j+1]!='#')
                    {
      //                  cout<<w*(i-1)+j+1<<" "<<w*(i-1)+j<<endl;
                        adj[w*(i-1)+j+1].push_back(w*(i-1)+j);
                    }
                }
                temp=invalid(i+1,j);
                if(temp)
                {
                    if(arr[i][j]!='#'&&arr[i+1][j]!='#')
                    {

                        adj[w*(i)+j].push_back(w*(i-1)+j);
                    }
                }
            }
        }


        ll ans=bfs(s);
        printf("Case %lld: %lld\n",cases++,ans+1);
    }
    return 0;
}
