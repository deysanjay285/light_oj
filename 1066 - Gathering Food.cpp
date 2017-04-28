#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mx 100

char arr[mx][mx],rr;
bool visited[mx];;
vector<ll> adj[mx];
vector<ll>::iterator it;
ll level[mx];
ll n,s_r,s_c;
ll cal[mx*mx],arr2[mx][mx];

bool invalid(ll x,ll y)
{
    if(x<1||y<1||x>n||y>n)
        return 0;
    return 1;
}

ll bfs(ll s,char ch)
{
    ll nxt=ch-'A'+2;
    ll prv=nxt-1;

    stack<ll> Q;
    stack<ll> stk;
    memset(level,0,sizeof(level));
    memset(visited,0,sizeof(visited));


    level[s]=0;
    visited[s]=1;
    Q.push(s);
    stk.push(s);


    while(!Q.empty())
    {
        ll u=Q.top();
        //Q.pop();
        //cout<<adj[u].size()<<endl;;
        //cout<<"u:"<<u<<endl;
        for(ll i=0; i<adj[u].size(); i++)
        {
            ll v=adj[u][i];
            if(visited[v]==0)
            {
                cout<<Q.size()<<endl;
                visited[v]=1;
                level[v]=level[u]+1;
                Q.push(v);
            }
        }
        cout<<"k"<<endl;
    }
    cout<<Q.size()<<endl;
    while(!Q.empty())
    {
        cout<<Q.top()<<endl;
        Q.pop();
    }
}

int main()
{
    ll t,cases=1;
    scanf("%lld",&t);
    while(t--)
    {
        memset(cal,0,sizeof(cal));
        ll c=0;
        scanf("%lld",&n);
        getchar();
        for(ll i=1; i<=n; i++)
        {
            for(ll j=1; j<=n; j++)
            {
                scanf("%c",&arr[i][j]);
                if(arr[i][j]=='A')
                {
                    s_r=i;
                    s_c=j;
                }
                if(arr[i][j]!='.'&&arr[i][j]!='#')
                {
                    arr[i][j]=arr[i][j]-'A'+1;
                    c++;
                }


            }
            getchar();
        }


        for(ll i=1; i<=n; i++)
        {
            for(ll j=1; j<=n; j++)
            {

                //cout<<i<<" "<<j<<endl;
                bool temp;
//                cout<<"k"<<endl;
                temp=invalid(i-1,j);
                if(temp==1)
                {
                    if(arr[i][j]!='#'&&arr[i-1][j]!='#')
                    {
                        //                      cout<<"1 "<<n*(i-1)+j<<" "<<n*(i-2)+j<<endl;
                        if(arr[i][j]!='.')
                        {
                            cal[n*(i-1)+j]=arr[i][j];
                        }
                        adj[n*(i-1)+j].push_back((n*(i-2)+j));
                    }
                }

                temp=invalid(i,j-1);
                if(temp==1)
                {
                    if(arr[i][j]!='#'&&arr[i][j-1]!='#')
                    {
                        //                    cout<<"2 "<<n*(i-1)+j<<" "<<n*(i-1)+j-1<<endl;
                        if(arr[i][j]!='.')
                        {
                            cal[n*(i-1)+j]=arr[i][j];
                        }

                        adj[n*(i-1)+j].push_back((n*(i-1)+j-1));
                    }
                }


                temp=invalid(i,j+1);
                if(temp==1)
                {
                    if(arr[i][j]!='#'&&arr[i][j+1]!='#')
                    {
                        //                  cout<<"3 "<<n*(i-1)+j<<" "<<n*(i-1)+j+1<<endl;
                        if(arr[i][j]!='.')
                        {
                            cal[n*(i-1)+j]=arr[i][j];
                        }
                        adj[n*(i-1)+j].push_back((n*(i-1)+j+1));
                    }
                }
                temp=invalid(i+1,j);
                if(temp==1)
                {
                    if(arr[i][j]!='#'&&arr[i+1][j]!='#')
                    {
                        //                cout<<"4 "<<n*(i-1)+j<<" "<<n*(i)+j<<endl;
                        //                cout<<arr[i+1][j]<<endl;
                        if(arr[i][j]!='.')
                        {
                            cal[n*(i-1)+j]=arr[i][j];
                        }
                        adj[n*(i-1)+j].push_back((n*(i)+j));
                    }
                }
                // cout<<endl;
            }
        }
        ll s_i=n*(s_r-1)+s_c;
        ll ans=bfs(s_i,'A');


//        for(ll i=1; i<=n*n; i++)
//        {
//
//            cout<<i<<" ";
//            it=adj[i].begin();
//            for(; it!=adj[i].end(); it++)
//            {
//                cout<<*it<<" ";
//            }
//            cout<<endl;
//        }


        for(ll i=1; i<=n*n; i++)
            adj[i].clear();
    }
    return 0;
}

//cout<<"v:"<<v<<"  "<<cal[v]<<endl;
//                if(cal[v]!=nxt&&cal[v]!=0)
//                {
//                    cout<<cal[v]<<" "<<nxt<<endl;
//                    ll temp=Q.top();
//                    visited[temp]=0;
//                    level[temp]=0;
//                    cout<<cal[temp]<<" "<<prv<<endl;
//                    while(cal[temp]!=prv)
//                    {
//
//                        cout<<"temp:"<<temp<<endl;
//                        Q.pop();
//                        temp=Q.top();
//                        visited[temp]=0;
//                        level[temp]=0;
//                        cout<<"temp:"<<temp<<endl;
//                    }
//                }
//                if(cal[v]==nxt)
//                {
//
//                    nxt=nxt+1;
//                    prv=prv+1;
//                }
//
//                cout<<v<<" "<<r<<" "<<c<<endl;
