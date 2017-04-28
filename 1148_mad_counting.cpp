#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<math.h>
#include<algorithm>
#include<iterator>
#include<string>
#include<set>
#include<map>

using namespace std;

#define ll long long int
#define ull unsigned long long int
#define pi 2*acos(0.0)

int main()
{
    ll t,n,data,sum,cases=1,ar[100],arr[100],arr2[100],j,c,res;
    double r;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        j=0;
        c=1;
        sum=0;
        for(ll i=0;i<n;i++)
        {
            scanf("%lld",&ar[i]);
        }
        std::sort(ar,ar+n);
        for(ll i=0;i<n;i++)
        {
            data=ar[i];
            if(i>0)
            {
                if(data!=ar[i-1])
                {
                    c=1;
                    arr[j]=data;o
                    arr2[j++]=c++;;

                }
                else
                {
                    arr2[j-1]=c++;
                }
            }
            else
            {
                arr[i]=data;
                arr2[j++]=c++;
            }
        }
        for(ll i=0;i<j;i++)
        {
            r=(double)arr2[i]/(arr[i]+1);
            res=ceil(r)*(arr[i]+1);
            sum=sum+res;
        }
        printf("Case %lld: %lld\n",cases++,sum);
    }
    return 0;
}

