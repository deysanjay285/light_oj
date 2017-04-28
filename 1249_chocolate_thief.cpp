#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<iostream>
#include<stack>
#include<queue>
#include<vector>
#include<map>
#include<set>
#include<bitset>
#include<algorithm>
#include<iterator>

using namespace std;

#define ll long long int
#define ull unsingned long long int
#define pi 2*acos(0.0)
#define pb push_back
#define pf push-front
#define ppb pop_back
#define ppf pop_front
#define mx 10000


struct chocolate
{
    char name[50];
    ll height;
    ll length;
    ll width;
    ll volume;
};

int main()
{
    ll t,n,cases=1,max_volume,min_volume;
    char max_name[100],min_name[100];
    struct chocolate chc[1000];
    scanf("%lld",&t);
    while(t--)
    {
        max_volume=-1;
        min_volume=100*100*101;
        scanf("%lld",&n);
        for(ll i=0; i<n; i++)
        {
            scanf("%s %lld %lld %lld",chc[i].name,&chc[i].length,&chc[i].height,&chc[i].width);
            chc[i].volume=chc[i].length*chc[i].width*chc[i].height;
            if(chc[i].volume>max_volume)
            {
                max_volume=chc[i].volume;
                strcpy(max_name,chc[i].name);
            }

            if(chc[i].volume<min_volume)
            {
                min_volume=chc[i].volume;
                strcpy(min_name,chc[i].name);
            }
        }
        if(max_volume==min_volume)
            printf("Case %lld: no thief\n",cases++);
        else printf("Case %lld: %s took chocolate from %s\n",cases++,max_name,min_name);
    }
    return 0;
}
