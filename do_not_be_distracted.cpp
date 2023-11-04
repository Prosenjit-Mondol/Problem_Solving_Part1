#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,v=1;
        cin>>n;
        char s[n+1];
        cin>>s;
        if(n<=2)
        {
            v=1;
        }
        else
        {
            for(int i=0;i<n-1;i++)
            {
                if(s[i]!=s[i+1])
                {
                    for(int j=i+1;j<n;j++)
                    {
                        if(s[i]==s[j])
                        {
                            v=0;
                            break;
                        }
                        else
                            continue;
                    }
                }
                else
                    continue;
            }
        }
        if(v==1)
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";
    }
    return 0;
}

