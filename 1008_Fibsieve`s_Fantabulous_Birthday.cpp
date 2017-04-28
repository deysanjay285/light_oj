#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,s,temp,temp2,x,y,temp3,dif,caseno=1;
    long double temp1;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&s);
        temp1=sqrt(s);
        x=y=temp=ceil(temp1);
        temp2=temp*temp-temp+1;
        if(temp%2==0)
        {
            if(s>temp2)
            {
                dif=s-temp2;
                y=y-dif;
            }
            else
            {
                dif=temp2-s;
                x=x-dif;
            }
        }
        else
        {
            if(s>temp2)
            {
                dif=s-temp2;
                x=x-dif;
            }
            else
            {
                dif=temp2-s;
                y=y-dif;
            }
        }
        printf("Case %lld: %lld %lld\n",caseno++,x,y);
    }
    return 0;
}
