#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<string.h>
#include<string>
#include<iterator>
#include<math.h>
#include<stdlib.h>

using namespace std;

#define ll long long int
#define ull unsingned long long int



ll decimal_to_binary(ll num,char arr[])
{
    ll i=0,c=0;

    while(num)
    {
        arr[i++]=num%2+48;

        if(num%2==1)
            c++;
            num/=2;
    }
    arr[i]='\0';

    return c;
}

int main()
{
    char arr[10000],ch;
    ll t,n,temp,cases=1,c;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        c=decimal_to_binary(n,arr);
        cout<<c<<endl;
        if(c%2==1)
            printf("Case %lld: odd\n",cases++);
        else printf("Case %lld: even\n",cases++);


    }
    return 0;
}
