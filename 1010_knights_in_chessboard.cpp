#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int m,n,t,cases=1,temp;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&m,&n);
        if((m*n)%2==0)
            temp=(m*n)/2;
        else
        {
            temp=((m*n)/2)+1;
        }
        if(n==1&&m!=2)
            temp=m;
        if(m==1&&n!=2)
            temp=n;
        if(n==2)
        {

            if(m%2==0)
            {
                if(m%4==0)
                {
                    temp=m;
                }

                else temp=m+2;
            }
            else temp=m+1;
        }
        if(m==2)
        {
            if(n%2==0)
            {
                if(n%4==0)
                    temp=n;
                else temp=n+2;
            }
            else temp=n+1;
        }
        printf("Case %lld: %lld\n",cases++,temp);
    }
    return 0;
}
