#include<stdio.h>
#include<iostream>
#include<string>
#include<math.h>
#include<string.h>

using namespace std;

#define ll long long int


int main()
{
    ll t,x1,y1,x2,y2,m,x,y,cases=1;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld %lld %lld %lld",&x1,&y1,&x2,&y2,&m);
        printf("Case %lld:\n",cases++);
        while(m--)
        {
            scanf("%lld %lld",&x,&y);

            if(x>x2)
                printf("No\n");
            else if(x<x1)
                printf("No\n");
            else if(y>y2)
                printf("No\n");
            else if(y<y1)
                printf("No\n");
            else printf("Yes\n");
        }
    }
    return 0;
}
