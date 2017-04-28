#include<bits/stdc++.h>
using namespace std;


#define ll long long

int a, b, c, d, e, f;
int arr[10100];

int fn(int n)
{
    if (n == 0) return a;
    if (n == 1) return b;
    if (n == 2) return c;
    if (n == 3) return d;
    if (n == 4) return e;
    if (n == 5) return f;
    if(arr[n]!=-1)
    {
        return arr[n];
    }
    else
    {
           arr[n]=(((((((fn(n - 1)%10000007 + fn(n - 2)%10000007)%10000007 + fn(n - 3)%10000007))%10000007 + fn(n - 4)%10000007)%10000007 + fn(n - 5)%10000007)%10000007) + fn(n - 6)%10000007)%10000007;
           return arr[n];
    }
}


int main()
{
    int n, caseno = 0, cases;
    scanf("%d", &cases);
    while (cases--)
    {
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        for(int i=0;i<10100;i++)
            arr[i]=-1;
        printf("Case %d: %d\n",++caseno, fn(n) % 10000007);
    }
    return 0;
}
