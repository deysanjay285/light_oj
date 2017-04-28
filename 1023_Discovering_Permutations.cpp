#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t,n,k,cases=1,i,arr2[32],sum=1;
    char arr[30];
    for(i=1; i<=30; i++)
    {
        if(i<10)
        {
            sum*=i;
            arr2[i]=sum;
        }
        else arr2[i]=sum;
    }
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&n,&k);
        for(i=0; i<n; i++)
            arr[i]='A'+i;
        arr[i]='\0';
        printf("Case %lld:\n",cases++);
        k=min(arr2[n],k);
        while(k--)
        {
            printf("%s\n",arr);
            next_permutation(arr,arr+n);
        }
    }
    return 0;
}
