#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,q;
        cin>>n>>a>>q;
        string s;
        cin>>s;
        int v=0,p=0,m=a;
        if(m==n)
        f1=1;
         for(int i=0;s[i]!='\0';i++)
            {
            if(s[i]=='+')
            p++;
            else
            p--;
            if(s[i]=='+')
            v++;
         }
         if(p==n)
         cout<<"YES"<<endl;
         else if(p>n)
         cout<<"NO"<<endl;
         else
         cout<<"MAYBE"<<endl;

    }
    return 0;
}