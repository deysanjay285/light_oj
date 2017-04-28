#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<iterator>

using namespace std;

#define ll long long int
#define ull uknsigned long long int
#define pi 2*acos(0.0)

int main()
{
    ll t,n,cases=1;
    char a[10],alice[]= {"Alice"},bob[]= {"Bob"};
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %s",&n,a);
        if(strcmp(a,alice)==0)
        {
            if(n%3==1)
            {
                printf("Case %lld: %s\n",cases++,bob);
            }
            else
            {
                printf("Case %lld: %s\n",cases++,alice);
            }
        }
        else
        {
            if(n%3==0)
            {
                printf("Case %lld: %s\n",cases++,alice);
            }
            else
            {
                printf("Case %lld: %s\n",cases++,bob);
            }

        }
    }
    return 0;
}
