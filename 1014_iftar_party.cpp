#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<ctype.h>
#include<stack>
#include<queue>
#include<list>
#include<vector>
#include<set>
#include<map>
#include<bitset>
#include<algorithm>
#include<iterator>
#include<iostream>


using namespace std;

#define ll long long int
#define ull unsigned long long int
#define pi 2*acod(0.0)
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define mx 101000

int main()
{
    ll t,cases=1,p,l,arr[mx],n,temp1,temp2,j,temp,flag;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&p,&l);
        temp=p-l;
        n=sqrt(temp);
        j=0;
        flag=0;
        for(ll i=1; i<=n; i++)
        {
            if(temp%i==0)
            {

                temp1=temp/i;
                temp2=i;
                if(temp1>l)
                {
                    flag=1;
                    arr[j++]=temp1;
                    if(temp1==temp2)
                        continue;
                }

                if(temp2>l)
                {
                    flag=1;
                    arr[j++]=temp2;
                }


            }
        }
        sort(arr,arr+j);
        if(flag==0)
        {
            printf("Case %lld: impossible\n",cases++);
        }
        else
        {
            printf("Case %lld:",cases++);
            for(ll i=0; i<j; i++)
            {
                printf(" %lld",arr[i]);
            }
            printf("\n");
        }
    }
    return 0;
}
