#include<bits/stdc++.h>
#include<tuple>
#include<utility>
#include<algorithm>
#define vi vector<int>v
#define pi pair<int,int>
using namespace std;
using ll=long long ;

void solve(void)
{
    string s;
    cin>>s;
    int o=s.size();
    int to=o/6;
    int bo=o-to*6;
    int w=0,r=0;
    for (int i = 0; i <s.size(); i++)
    {
        if(s[i]=='W')
        {
            w++;
        }
        else if(s[i]=='1')
        r++;
        else if(s[i]=='2')
        r+=2;
        else if(s[i]=='3')
        r+=3;
        else if(s[i]=='4')
        r+=4;
        else if(s[i]=='5')
        r+=5;
        else if(s[i]=='6')
        r+=6;
    }

    double x=bo;
    x=x/10;
    double y=x+(double)to;


    string run="Run",over="Over",wi="Wicket.";

    if(r>1)
    run="Runs";
    if(w>1)
    wi="Wickets.";
    if(y>1.0)
    over="Overs";

    //printf("%1lf",y);
    cout<<fixed<<setprecision(1)<<y<<" "<<over<<" "<<r<<" "<<run<<" "<<w<<" "<<wi<<"\n";
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  int t;
  cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}