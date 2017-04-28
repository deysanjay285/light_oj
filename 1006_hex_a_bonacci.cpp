#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, b, c, d, e, f,t;
    long long int n, caseno = 0, cases;
    scanf("%lld", &cases);
    while( cases-- )
    {
        scanf("%lld %lld %lld %lld %lld %lld %lld", &a, &b, &c, &d, &e, &f, &n);
        //printf("%lld+%lld+%lld+%lld+%lld+%lld+",a,b,c,d,e,f);
        if(n==0)
            printf("Case %lld: %lld\n",++caseno,a%10000007);
        else if(n==1)
            printf("Case %lld: %lld\n",++caseno,b%10000007);
        else if(n==2)
            printf("Case %lld: %lld\n",++caseno,c%10000007);
        else if(n==3)
            printf("Case %lld: %lld\n",++caseno,d%10000007);
        else if(n==4)
            printf("Case %lld: %lld\n",++caseno,e%10000007);
        else if(n==5)
            printf("Case %lld: %lld\n",++caseno,f%10000007);
        else if(n>5)
        {
            for(long long int i=5; i<n; i++)
            {
                t=(a+b+c+d+e+f)%10000007;
                a=b%10000007;
                b=c%10000007;
                c=d%10000007;
                d=e%10000007;
                e=f%10000007;
                f=t%10000007;
            }
            printf("Case %lld: %lld\n",++caseno,f);

        }
    }
    return 0;
}
