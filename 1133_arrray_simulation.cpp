#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string.h>
#include<algorithm>
#include<iterator>

using namespace std;

#define ll long long int
#define ull unsigned long long int
//

ll sum(ll arr[],ll size_of_array,ll num)
{
    for(ll i=0; i<size_of_array; i++)
    {
        arr[i]=arr[i]+num;
    }
}

ll multiply(ll arr[],ll size_of_arr,ll num)
{
    for(ll i=0; i<size_of_arr; i++)
    {
        arr[i]=arr[i]*num;
    }
}

ll divide(ll arr[],ll size_of_arr,ll num)
{
    for(ll i=0; i<size_of_arr; i++)
    {
        arr[i]=arr[i]/num;
    }
}

ll reverse(ll arr[],ll size_arr)
{
    ll i=0,j=size_arr-1,temp=size_arr/2,t;
    for(i=0; i<temp; i++,j--)
    {
        t=arr[i];
        arr[i]=arr[j];
        arr[j]=t;
    }
}



int main()
{
    ll t,n,m,arr[1000],cases=1,temp,size_of_arr,y,z;
    char ch;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld\n",&n,&m);
        size_of_arr=n;
        ll i=0;
        while(n--)
            scanf("%lld",&arr[i++]);
        getchar();
        while(m--)
        {
            scanf("%c",&ch);
            getchar();
            if(ch=='S')
            {
                scanf("%lld",&temp);
                getchar();
                sum(arr,size_of_arr,temp);
            }

            else if(ch=='M')
            {
                scanf("%lld",&temp);
                getchar();
                multiply(arr,size_of_arr,temp);
            }
            else if(ch=='D')
            {
                scanf("%lld",&temp);
                getchar();
                divide(arr,size_of_arr,temp);
            }

            else if(ch=='R')
            {
                reverse(arr,size_of_arr);
            }
            else
            {
                scanf("%lld %lld",&y,&z);
                getchar();
                swap(arr[y],arr[z]);
            }

        }
        printf("Case %lld:\n",cases++);
        for(ll i=0; i<size_of_arr; i++)
        {
            printf("%lld",arr[i]);
            if(i<size_of_arr-1)
                printf(" ");
        }
        printf("\n");



    }
    return 0;
}
