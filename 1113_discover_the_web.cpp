#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<stack>
#include<string>
#include<math.h>
#include<string.h>
#include<iterator>
using namespace std;

#define ll long long int

int main ()
{

    char ch;
    ll t,flag,A,B,flag1,cases=1,c=0;
    scanf("%lld",&t);
    getchar();
    while(t--)
    {
        std::stack<string> mou,dey;
        std::string san,jay="QUIT",mita="VISIT",kor="BACK",mo="FORWARD",kar,big="http://www.lightoj.com/";
        std::string::iterator it;
        mou.push(big);
        // cout<<mou.top();
        printf("Case %lld:\n",cases++);
        //c=0;
        while(true)
        {

            while(scanf("%c",&ch))
            {
                if(ch==' ')
                {
                    break;
                }
                if(ch=='\n')
                    break;
                san.push_back(ch);
            }
            //cout<<san<<"\n";
            if(san==jay)
            {
                san.clear();
                break;
            }
            if(san==mita)
            {
                san.clear();
                while(!dey.empty())
                {
                    dey.pop();
                }
                cin>>san;
                getchar();
                mou.push(san);
            }
            flag=0;
            flag1=0;
            if(san==kor)///BACK
            {

                A=mou.size();
                if(A==1)
                {
                    flag=1;
                }

                if(A>1)
                {
                    kar=mou.top();
                    dey.push(kar);
                    mou.pop();
                }
            }
            A=mou.size();
            B=dey.size();
            if(san==mo)///FORWARD
            {
                B=dey.size();
                if(B==0)
                    flag1=1;
                if(B>0)
                {
                    kar=dey.top();
                    mou.push(kar);
                    dey.pop();
                }
            }
            A=mou.size();
            B=dey.size();
            if(flag==1||flag1==1)
            {
                printf("Ignored\n");
            }
            else cout<<mou.top()<<"\n";
            san.clear();

        }
    }
    return 0;
}

