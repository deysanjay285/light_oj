#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pnt struct point
#define pi 2*acos(0.0)
#define mx 100005

struct point
{
    ll x,y;
    double angle,distance;
    bool operator<(const point &p)const
    {
        if (y == p.y)
            return (x > p.x);
        return y < p.y;
    }
};

stack<pnt> points;
set<pnt> pt;
set<pnt>::iterator it;
pnt ab[mx],arr[mx];


bool comp(pnt a,pnt b)
{
    if(a.angle==b.angle)
    {
        if(a.distance==b.distance)
            return 0;
        else return (a.distance>b.distance);
    }

    else return (a.angle<b.angle);
}



pnt next_to_top()
{
    pnt top=points.top();
    points.pop();
    pnt nxt=points.top();
    points.push(top);
    return nxt;
}

double polar_angle(pnt a,pnt b)
{
    if(a.x-b.x==0)
    {
        if((a.y-b.y)>0)
        {
            return pi/2;
        }
        else return 3*pi/2;
    }
    double ans= (double)(a.y-b.y)/(a.x-b.x),ang;
    ang=atan(ans);
    if(ang>0)
    {
        if((a.x-b.x)<0)
        {
            ang+=pi;
        }
    }
    else if(ang<0)
    {
        if((a.x-b.x)>0)
        {
            ang=2*pi+ang;
        }
        else ang=pi+ang;
    }

    return ang;
}

double dist(pnt a,pnt b)
{
    double ans=sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
    return ans;
}

pnt vec(pnt a,pnt b)
{
    pnt temp;
    temp.x=a.x-b.x;
    temp.y=a.y-b.y;
    temp.angle=0;
    temp.distance=sqrt(temp.x*temp.x+temp.y*temp.y);
    return temp;
}

ll anticlock(pnt a,pnt b,pnt c)
{
    double angle;
    pnt ab,bc,ca;
    ll temp;
    ab=vec(a,b);
    bc=vec(b,c);
    temp=ab.x*bc.y-ab.y*bc.x;
    angle=temp/(ab.distance*bc.distance);
    if(angle<0)
        return 0;
    else return 1;
}

double angl(pnt a,pnt b,pnt c)
{
    double angle;
    pnt ba,bc;
    ll temp;
    ba=vec(a,b);
    bc=vec(c,b);
    temp=ba.x*bc.x+ba.y*bc.y;
    angle=temp/(ba.distance*bc.distance);
    angle=acos(angle);
    return angle;
}

ll convex_hull(ll n)
{
    ll minx,temp;
    for(ll i=0; i<n; i++)
    {
        if(i!=0)
        {
            if(ab[i].y<minx||(ab[i].y==minx&&ab[i].x<ab[temp].x))
            {
                temp=i;
                minx=ab[i].y;
            }
        }
        else
        {
            temp=0;
            minx=ab[i].y;
        }
    }
    swap(ab[0],ab[temp]);
    for(ll i=0; i<n; i++)
    {
        if(i!=0)
        {
            ab[i].angle=polar_angle(ab[i],ab[0]);
            ab[i].distance=dist(ab[i],ab[0]);
        }
        else
        {
            ab[i].angle=0.0;
            ab[i].distance=0.0;
        }
    }

    sort(ab+1,ab+n,comp);
    points.push(ab[0]);
    points.push(ab[1]);
    points.push(ab[2]);

    for(int i=3; i<n; i++)
    {
        pnt top=points.top();
        while(true)
        {
            if(anticlock(next_to_top(),points.top(),ab[i])==0)
            {
                points.pop();
            }
            else break;
        }
        points.push(ab[i]);
    }
//    cout<<endl<<endl;
//    for(ll i=0; i<n; i++)
//        cout<<ab[i].x<<" "<<ab[i].y<<endl;
//    cout<<endl<<endl;
    ll k=0;
    while(!points.empty())
    {
        pnt top=points.top();
        arr[k].x=top.x;
        arr[k++].y=top.y;
        points.pop();
    }
    return k;
}

int main()
{
    ll n,minx,temp,t,cases=1,x,y;
    double ang[mx],min_ang=1000,an;
    pnt aa;
    scanf("%lld",&t);
    while(t--)
    {
        ll i;
        min_ang=1000.0;
        scanf("%lld",&n);
        for(i=0; i<n; i++)
        {
            scanf("%lld %lld",&ab[i].x,&ab[i].y);
            pt.insert(ab[i]);
        }
        it=pt.begin();
        i=0;
        while(it!=pt.end())
        {
            ab[i]=*it++;
            i++;
        }
        if(i<3)
        {
            double a=0.0;
            printf("Case %lld: %0.6lf\n",cases++,a);
            continue;
        }
        temp=convex_hull(i);
        double a=pi;
        for(i=0; i<temp-2; i++)
        {
            an=angl(arr[i],arr[i+1],arr[i+2]);
            ang[i]=an;
            //cout<<ang[i]<<endl;
        }
        an=angl(arr[temp-2],arr[temp-1],arr[0]);
        ang[i++]=an;
        an=angl(arr[temp-1],arr[0],arr[1]);
        ang[i++]=an;
        for(i=0; i<temp; i++)
        {
            min_ang=min(min_ang,ang[i]);
        }
        printf("Case %lld: %0.6lf\n",cases++,min_ang/a*180);
        pt.clear();
    }
    return 0;
}

