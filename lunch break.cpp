#include<iostream>
using namespace std;
int main()
{
    int m,r,h,h1,h2,m1,m2;
    char t1,t2;
    cin>>h1>>t1>>m1>>h2>>t2>>m2;
    if(m1>m2)
    {
        m=m2+60-m1;
        if((h1+1)>h2)
        {
            h=23+h2-h1;
        }
        else
            h=h2-1-h1;
    }
    else{
        m=m2-m1;
        if(h1>h2)
        {
            h=h2+24-h1;
        }
        else
            h=h2-h1;
    }

    int t=h*60+m;
    t/=2;
    if((t+m1)<=59)
    {
        cout<<h1<<":"<<(t+m1)<<"\n";
    }
    else{
        r=t/60;
        m=t-(r*60);
        if((m1+m)<=59)
        {
            if((h1+r)>23)
                cout<<(h1+r-24)<<":"<<(m+m1)<<"\n";
            else
                cout<<(h1+r)<<":"<<(m+m1)<<"\n";
        }
        else{
            if((h1+r+1)>23)
                cout<<(h1+1+r-24)<<":"<<(m+m1-60)<<"\n";
            else
                cout<<(h1+r+1)<<":"<<(m+m1-60)<<"\n";
        }
    }
    return 0;
}
