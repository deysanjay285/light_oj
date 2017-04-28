#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
#include<math.h>
#include<algorithm>
#include<iterator>

using namespace std;

#define ll long  long int
#define ull unsigned long long int

ll rem;

char *division(char *quotiont,ll divisor)
{
    char dividend[10000],div[1000],tem[10000],zero[]="0";
    ll i,ld,lq,temp,temp2,c,l,flag;
    sprintf(div,"%lld",divisor);
    ld=strlen(div);
    lq=strlen(quotiont);
    if(strcmp(quotiont,zero)==0)
    {
        rem=0;
        return zero;
    }

    if(lq<17)
    {
        temp=atoll(quotiont);
        rem=temp%divisor;
        temp=temp/divisor;
        sprintf(div,"%lld",temp);
        return div;
    }

    for(i=0; i<ld; i++)
    {
        tem[i]=quotiont[i];
    }
    tem[i]='\0';
    temp=atoll(tem);
    if(divisor>temp)
    {
        tem[i]=quotiont[i];
        tem[++i]='\0';
        temp=atoll(tem);

    }
    temp=atoll(tem);
    c=0;
    dividend[c++]=temp/divisor+48;
    rem=temp%divisor;
    sprintf(tem,"%lld",rem);
    temp=atoll(tem);

    while(true)
    {
        flag=0;
        if(i==lq)
            break;
        while(temp<divisor)
        {
            if(flag>0)
                dividend[c++]='0';
            l=strlen(tem);
            tem[l++]=quotiont[i++];
            tem[l++]='\0';
            temp=atoll(tem);
            if(temp==0||i==lq)
                break;
            flag++;
        }
        dividend[c++]=temp/divisor+48;
        rem=temp%divisor;
        sprintf(tem,"%lld",rem);
        temp=atoll(tem);
        if(i==lq)
            break;

    }
    dividend[c++]='\0';
    return dividend;
}




int main()
{
    char a[10000],*temp,ch;
    ll t,cases=1,i,div;
    scanf("%lld",&t);
    getchar();
    while(t--)
    {
        i=0;
        while(true)
        {
            scanf("%c",&ch);
            if(ch=='-')
                continue;
            if(ch==' '||ch=='\n')
                break;
            a[i++]=ch;
        }
        a[i]='\0';
        scanf("%lld",&div);
        div=abs(div);
        getchar();
        temp=division(a,div);
        printf("Case %lld:",cases++);
        if(rem==0)
            printf(" divisible\n");
        else printf(" not divisible\n");

    }

    return 0;
}
