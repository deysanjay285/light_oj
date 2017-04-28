
#include<stdio.h>
int main()
{
    int num,divisor,sum,i,j,test_cases;
    //printf("Enter the number of test_cases");
    scanf("%d",&test_cases);
    for(i=0; i<test_cases; i++)
    {
        sum=0;
        //  printf("Enter the numbers");
        scanf("%d",&num);
        for(j=1; j<num; j++)
        {
            divisor=num%j;
            if(divisor==0)
            {
                sum=sum+j;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
