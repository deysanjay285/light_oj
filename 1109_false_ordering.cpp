#include<iostream>
#include<stdio.h>
#include<math.h>
#include<string>
#include<string.h>
#include<stdlib.h>
#include<algorithm>

using namespace std;

#define ll long long int

ll arr[2][10000];

void divisor_counter()
{
    ll temp,c;
    for(ll i=1; i<=1000; i++)
    {
        temp=sqrt(i);
        c=0;
        for(ll j=1; j<=temp; j++)
        {
            if(i%j==0)
                c+=2;
            if(j*j==i)
                c--;
        }
        arr[0][i]=c;
    }
    for(ll i=1;i<=1000;i++)
    {
        arr[1][i]=i;
    }
    arr[1][1]=1;

}

void sort_array()
{
    ll temp,temp1;
    for(ll i=1;i<=1000;i++)
    {
        for(ll j=1;j<1000;j++)
        {
            if(arr[0][j]<arr[0][j+1])
            {
                temp=arr[0][j];
                arr[0][j]=arr[0][j+1];
                arr[0][j+1]=temp;
                temp1=arr[1][j];
                arr[1][j]=arr[1][j+1];
                arr[1][j+1]=temp1;

            }
        }
    }
}

int  main()
{
    divisor_counter();
    sort_array();
    ll t,n,x,cases=1;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
            printf("Case %lld: %lld\n",cases++,arr[1][1001-n]);
    }
    return 0;
}
