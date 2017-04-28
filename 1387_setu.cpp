#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char a[100],b[]= {"donate"},c[]= {"report"},num[10],ch[10];
    int n,l,sum=0,j,k,i,num1,t,cases=1;
    scanf("%d",&t);
    while(t--)
    {


        scanf("%d",&n);
        sum=0;
        printf("Case %d:\n",cases++);
        while(n+1)
        {
            gets(a);
            l=strlen(a);
            j=0;
            k=0;
            for(i=0; i<l; i++)
            {
                if(a[i]>='a'&&a[i]<='z')
                {
                    ch[k]=a[i];
                    k++;
                }

                if(a[i]>='0'&&a[i]<='9')
                {
                    num[j]=a[i];
                    j++;
                }
            }
            num[j]='\0';
            ch[k]='\0';
            num1=atoi(num);
            if(strcmp(ch,b)==0)
            {
                sum=sum+num1;
            }
            if(strcmp(a,c)==0)
            {
                printf("%d\n",sum);
            }
            n--;
        }
    }
    return 0;
}
