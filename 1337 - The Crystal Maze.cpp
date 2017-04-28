#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mx 255025


vector< pair<ll,ll> > adj[mx];
vector< pair<ll,ll> >::iterator it;

ll r,c;
bool visited[mx];
char arr[505][505];
ll cal[505][505];

bool invalid(ll x,ll y)
{
    if(x<1||y<1||x>r||y>c)
        return 0;
    return 1;
}

void bfs(ll s)
{
    ll rr,cc;
    queue<ll> Q;
    memset(visited,0,sizeof(visited));
    ll k=0;
    visited[s]=1;
    Q.push(s);

    rr=ceil((double)s/c);
    cc=c-(c*rr-s);


    if(arr[rr][cc]=='C')
        k++;

    while(!Q.empty())
    {
        ll u=Q.front();

        it=adj[u].begin();
        Q.pop();
        for(ll i=0; i<adj[u].size(); i++)
        {

            ll v=it->first;
            //cout<<v<<endl;
            if(visited[v]==0)
            {
                rr=ceil((double)v/c);
                cc=c-(c*rr-v);
                if(arr[rr][cc]=='C')
                    k++;
                visited[v]=1;
                Q.push(v);
            }
            it++;
        }
    }

    memset(visited,0,sizeof(visited));
    rr=ceil((double)s/c);
    cc=c-(c*rr-s);
    //cout<<rr<<" "<<cc<<endl;
    cal[rr][cc]=k;
    visited[s]=1;
    Q.push(s);

    while(!Q.empty())
    {
        ll u=Q.front();

        it=adj[u].begin();
        Q.pop();

        for(ll i=0; i<adj[u].size(); i++)
        {
            ll v=it->first;
            if(visited[v]==0)
            {
                rr=ceil((double)v/c);
                cc=c-(c*rr-v);
                cal[rr][cc]=k;
                visited[v]=1;
                Q.push(v);
            }
            it++;
        }
    }
}

int main()
{
    ll t,s_r,s_c,q,cases=1;

    scanf("%lld",&t);
    while(t--)
    {
        memset(cal,-1,sizeof(cal));
        scanf("%lld %lld %lld",&r,&c,&q);
        getchar();
        for(ll i=1; i<=r; i++)
        {
            for(ll j=1; j<=c; j++)
            {
                scanf("%c",&arr[i][j]);
                if(arr[i][j]=='#')
                    cal[i][j]=0;
            }

            getchar();
        }

        for(ll i=1; i<=r; i++)
        {
            for(ll j=1; j<=c; j++)
            {
                bool temp=invalid(i-1,j);
                if(temp==1)
                {
                    if(arr[i][j]!='#'&&arr[i-1][j]!='#')
                    {


                        if(arr[i][j]=='C')
                            adj[c*(i-1)+j].push_back(make_pair(c*(i-2)+j,1));
                        else adj[c*(i-1)+j].push_back(make_pair(c*(i-2)+j,0));
                    }
                }

                temp=invalid(i,j-1);
                if(temp==1)
                {
                    if(arr[i][j]!='#'&&arr[i][j-1]!='#')
                    {


                        if(arr[i][j]=='C')
                            adj[c*(i-1)+j].push_back(make_pair(c*(i-1)+j-1,1));
                        else adj[c*(i-1)+j].push_back(make_pair(c*(i-1)+j-1,0));
                    }
                }


                temp=invalid(i,j+1);
                if(temp==1)
                {
                    if(arr[i][j]!='#'&&arr[i][j+1]!='#')
                    {


                        if(arr[i][j]=='C')
                            adj[c*(i-1)+j].push_back(make_pair(c*(i-1)+j+1,1));
                        else adj[c*(i-1)+j].push_back(make_pair(c*(i-1)+j+1,0));
                    }
                }
                temp=invalid(i+1,j);
                if(temp==1)
                {
                    if(arr[i][j]!='#'&&arr[i+1][j]!='#')
                    {

                        if(arr[i][j]=='C')
                            adj[c*(i-1)+j].push_back(make_pair(c*(i)+j,1));
                        else adj[c*(i-1)+j].push_back(make_pair(c*(i)+j,0));
                    }
                }
            }
        }


        printf("Case %lld:\n",cases++);
        for(ll i=0; i<q; i++)
        {
            scanf("%lld %lld",&s_r,&s_c);
            if(cal[s_r][s_c]!=-1)
                printf("li%lld\n",cal[s_r][s_c]);
            else
            {
                //cout<<c*(s_r-1)+s_c<<endl;
                bfs(c*(s_r-1)+s_c);
                printf("%lld\n",cal[s_r][s_c]);
            }
        }

        for(ll i=0; i<c*(r-1)+c; i++)
            adj[i].clear();

    }

    return 0;
}
