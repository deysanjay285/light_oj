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
#include<iostream>

using namespace std;

#define ll long long int
#define ull unsigned long long int
#define pi 2*acos(0.0)
#define pb push_back
#define pf push_front
#define ppf pop_front
#define ppb pop_back

void string_reverse(char* beginx)
{
    char temp;
    char* endx;
    endx = beginx + strlen(beginx)-1;

    while(endx>beginx)
    {
        temp = *endx;
        *endx = *beginx;
        *beginx = temp;
        endx--;
        beginx++;
    }
}

int size_of_string(char *arr)
{
    int length=0,i=0;
    while(1)
    {
        if(arr[i]=='\0'||arr[i]=='.')
            break;
            i++;
          length++;
    }
    return length;

}

void add_zero(char *first,char *second)
{
    int l1,l2,temp,diff;
    l1=size_of_string(first);
    l2=size_of_string(second);
    diff=l2-l1;
    temp=abs(diff);
    if(diff>0)
    {
        for(int i=l2-1; i>=0; i--)
        {
            first[i+temp]=first[i];
        }
        first[l2]='\0';
        for(int j=0; j<temp; j++)
        {
            first[j]='0';
        }

    }
    else if(diff<0)
    {
        for(int i=l2-1; i>=0; i--)
        {
            second[i+temp]=second[i];
        }
        second[l1]='\0';
        for(int j=0; j<temp; j++)
        {
            second[j]='0';
        }
    }
}

char *sum(char *first,char *second)
{
    char temp[10000];
    int length,f,s,ss=0,q=0,j=0;
    add_zero(first,second);
    length=strlen(first);

    for(int i=length-1;i>=0;i--)
    {
        if(first[i]=='.')
        {
            temp[j++]='.';
            continue;
        }
        f=first[i]-48;
        s=second[i]-48;
        ss=q+f+s;
        q=ss/10;
        ss=ss%10;
        ss=ss+48;
        temp[j++]=ss;
    }
    if(q>0)
        temp[j++]=q+48;
    temp[j]='\0';
    string_reverse(temp);
    return temp;

}

char *multiply(char *first,char *second)
{

    char *r,result[10000],a[10000],b[10000];
    ll l1,l2,i,j,temp1,temp2,res,rem,c=0;
    l2=strlen(second);
    result[0]='0';
    result[1]='\0';
    while(l2--)
    {
        cout<<l2<<endl;
        temp1=second[l2]-48;
        l1=strlen(first);
        i=0;
        j=0;
        while(j<c)
        {
            a[i++]='0';
            j++;
        }
        rem=0;
        while(l1--)
        {
            temp2=first[l1]-48;
            res=temp1*temp2+rem;
            rem=res/10;
            res=res%10;
            a[i++]=res+48;
        }
        if(rem>0)
        {
            a[i]=rem+48;
            a[i+1]='\0';
        }
        else a[i]='\0';

        string_reverse(a);
        r=sum(result,a);
        strcpy(result,r);
        c++;
    }
    return result;
}


int main()
{
    ll t,cases=1,n;
    char arr[]
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);

    }
    return 0;
}
