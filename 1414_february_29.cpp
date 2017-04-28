#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<string>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<iterator>
#include<math.h>


using namespace std;

#define ll long long int
#define ull unsigned long long int
#define pi 2*acos(0.0)


ll month(char m[])
{
    char f[]="January",s[]="February",t[]="March",fo[]="April",fi[]="May",si[]="June",se[]="July",ei[]="August",ni[]="September",te[]="October",el[]="November",tw[]="December";
    if(strcmp(m,f)==0)
        return 1;
    else if(strcmp(m,s)==0)
        return 2;
    else if(strcmp(m,t)==0)
        return 3;
    else if(strcmp(m,fo)==0)
        return 4;
    else if(strcmp(m,fi)==0)
        return 5;
    else if(strcmp(m,si)==0)
        return 6;
    else if(strcmp(m,se)==0)
        return 7;
    else if(strcmp(m,ei)==0)
        return 8;
    else if(strcmp(m,ni)==0)
        return 9;
    else if(strcmp(m,te)==0)
        return 10;
    else if(strcmp(m,el)==0)
        return 11;
    else if(strcmp(m,tw)==0)
        return 12;
}

int main()
{
    ll t,m1,m2,d1,y1,d2,y2,dif,t1,t2,ans,cases=1,f;
    char ch,a[100],b[100];
    scanf("%lld",&t);
    getchar();
    while(t--)
    {
        ans=0;
        scanf("%s %lld %c %lld",a,&d1,&ch,&y1);
        m1=month(a);
        scanf("%s %lld %c %lld",b,&d2,&ch,&y2);
        m2=month(b);
        dif=(y2-1)-(y1+1);
        if(dif>0)
        {
            t1=((y1+1)/4)+((y1+1)/400)-((y1+1))/100;
            t2=((y2-1)/4)+((y2-1)/400)-((y2-1)/100);
            ans=t2-t1;

            if(y1%4==0&&y1%100!=0)
            {
                if(m1<=2)
                    ans++;
            }
            if(y1%400==0)
            {
                if(m1<=2)
                    ans++;
            }

            if(y2%4==0&&y2%100!=0)
            {
                if(m2==2&&d2==29)
                    ans++;
                if(m2>2)
                    ans++;
            }
            if(y2%400==0)
            {
                if(m2==2&&d2==29)
                    ans++;
                if(m2>2)
                    ans++;
            }
        }

        else
        {
            if(y1%4==0&&y1%100!=0)
            {
                if(m1<=2&&m2==2)
                {
                    if(d2==29)
                        ans++;
                }
                if(m1<=2&&m2>2)
                {
                    ans++;
                }
            }


        }
        printf("Case %lld: %lld\n",cases++,ans);
    }
    return 0;
}
