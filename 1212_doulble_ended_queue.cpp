#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<math.h>
#include<iostream>
#include<stack>
#include<queue>
#include<vector>
#include<set>
#include<list>
#include<map>
#include<bitset>
#include<string>
#include<algorithm>
#include<iterator>

using namespace std;

#define ll long long int
#define ull unsingned long long int
#define pi 2*acos(0.0)
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define mx 10000


int main()
{
    ll t,cases=1,vector_size,m,n,num;
    string str,pl="pushLeft",pr="pushRight",ppl="popLeft",ppr="popRight";
    std::list<ll> v;
    std::list<ll>::iterator it;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&n,&m);
        printf("Case %lld:\n",cases++);
        for(ll i=0;i<m;i++)
        {
            cin>>str;
            if(str==pl||str==pr)
            {
                scanf("%lld",&num);
                if(v.size()==n)
                {
                    printf("The queue is full\n");
                }
                else
                {
                    if(str==pl)
                    {
                        v.pb(num);
                        printf("Pushed in left: %lld\n",num);
                    }
                    else
                    {
                        v.pf(num);
                        printf("Pushed in right: %lld\n",num);
                    }
                }
            }

            else
            {
                if(v.size()==0)
                {
                    printf("The queue is empty\n");
                }
                else
                {
                    if(str==ppl)
                    {

                        printf("Popped from left: %lld\n",v.back());
                        v.ppb();
                    }
                    else
                    {
                        printf("Popped from right: %lld\n",v.front());
                        v.ppf();
                    }
                }
            }
        }
        v.clear();

    }
    return 0;
}

