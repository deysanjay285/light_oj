#include<stdio.h>
#include<iostream>
#include<string.h>
#include<algorithm>
#include<iterator>

using namespace std;

#define ll long long int
#define ull unsigned long long int

int main()
{
    ll t,a,b,cases=1,temp1,temp2,temp3,temp4,no_of_a,no_of_b;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&a,&b);
        temp1=a/3;
        temp2=a%3;
        no_of_a=temp1*2;
        if(temp2%3==0)
            no_of_a--;
        temp3=b/3;
        temp4=b%3;
        no_of_b=temp3*2;
        if(temp4%3==2)
            no_of_b++;
        printf("Case %lld: %lld\n",cases++,no_of_b-no_of_a);
    }
    return 0;
}
