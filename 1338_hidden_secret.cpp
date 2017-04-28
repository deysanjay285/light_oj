#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<math.h>
#include<string>
#include<stack>
#include<queue>
#include<list>
#include<vector>
#include<set>
#include<map>
#include<bitset>
#include<algorithm>
#include<iterator>

using namespace std;

#define ll long long int
#define ull unsigned long long int
#define pi 2*acos(0.0)
#define pb push_back
#define pf push_front
#define ppf pop_front
#define ppb pop_back


void to_upper(char arr[])
{
    ll l1=strlen(arr);
    for(ll i=0;i<=l1;i++)
    {
        if(arr[i]>='a'&&arr[i]<='z')
            arr[i]=arr[i]-('a'-'A');
    }
}


int main()
{
    ll l1,l2,i,j,cases=1,t;
    char arr[1000],ch,ar[1000];
    scanf("%lld",&t);
    scanf("%c",&ch);
    while(t--)
    {
        i=0;
        while(true)
        {
            scanf("%c",&ch);
            if(ch=='\n')
                break;
            else if(ch==' ')
                continue;
            else arr[i++]=ch;
        }
        arr[i]='\0';
        i=0;
        while(true)
        {
            scanf("%c",&ch);
            if(ch=='\n')
                break;
            else if(ch==' ')
                continue;
            else ar[i++]=ch;
        }
        ar[i]='\0';
        to_upper(arr);
        to_upper(ar);
        l1=strlen(arr);
        l2=strlen(ar);
        std:sort(arr,arr+l1);
        sort(ar,ar+(l2));
        if(strcmp(ar,arr)==0)
            printf("Case %lld: Yes\n",cases++);
        else printf("Case %lld: No\n",cases++);
}

    return 0;
}
