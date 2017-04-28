#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,cases=1,arr[4];
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld %lld",&arr[0],&arr[1],&arr[2]);
        std::sort(arr,arr+3);
        if(arr[2]*arr[2]==arr[1]*arr[1]+arr[0]*arr[0])
            printf("Case %lld: yes\n",cases++);
        else printf("Case %lld: no\n",cases++);
    }
    return 0;
}
