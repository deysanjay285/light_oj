#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string>
#include<string.h>
#include<algorithm>
#include<iterator>

using namespace std;

#define ll long long int
#define ull unsigned long long int

int main()
{
    ll arr[30],t,n,cases=0,i,j,temp,sum=1,sum1=0,arr2[30],q,flag=0;
    arr[0]=1;
    for(i=1; i<=20; i++)
    {
        sum=sum*i;
        arr[i]=sum;
    }


    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        temp=n;
        j=20;
        sum1=0;
        q=0;
        while(j>=1)
        {
            for(i=1; i<=j; i++)
            {
                if(arr[i]>temp)
                    break;
            }
            if(i>0)
            {
                i--;
                if(i>0)
                {
                    arr2[q++]=i;
                    sum1=sum1+arr[i];
                }

                temp=temp-arr[i];
                j=i-1;
            }
        }
        printf("Case %lld: ",++cases);
        if((n-sum1)>1)
        {
            printf("impossible");
        }
        else if((n-sum1)==1)
        {
            printf("0!");
            for(i=q-1;i>=0;i--)
            {
                printf("+%lld!",arr2[i]);
            }
        }
        else
        {
            for(i=q-1;i>=0;i--)
            {
                printf("%lld!",arr2[i]);
                if(i!=0)
                    printf("+");
            }
        }
        printf("\n");

    }
    return 0;
}


