#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(void)
{
    ll i,j,s1,s2,s3,s4,s5;
    char s[11];
    s1=s2=s3=s4=s5=0;
    for(i=0; i<10; i++)
    {
        cin>>s;
        for(j=0; j<10; j++)
        {
            if((i==0||i==9||j==0||j==9)&&s[j]=='X')
                s1++;
            else if((i==1||i==8||j==1||j==8)&&s[j]=='X')
                s2++;
            else if((i==2||i==7||j==2||j==7)&&s[j]=='X')
                s3++;
            else if((i==3||i==6||j==3||j==6)&&s[j]=='X')
                s4++;
            else if((i==4||i==5||j==4||j==5)&&s[j]=='X')
                s5++;
        }
    }
    ll sum=s1*1+s2*2+s3*3+s4*4+s5*5;
    cout<<sum<<"\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test=1;
    cin>>test;
    while(test--)
        solve();
    return 0;
}