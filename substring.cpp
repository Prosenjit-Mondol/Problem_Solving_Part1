#include<bits/stdc++.h>
#include<tuple>
#include<utility>
#include<algorithm>
using namespace std;
const int inf = 3e5;
using ll=unsigned long long ;

void solve(void)
{
    string s;
    cin>>s;
    int c,x,m=0,k;
    cin>>k;
    vector<char>re,r;
    for (int i = 0; i <s.length(); i++)
    {
        c=0,x=0;
        r.clear();
        for (int j= 0; j< k; j++,x++)
        {
            r.push_back(s[j+i]);
            if(s[j+i]=='a'||s[j+i]=='e'||s[j+i]=='i'||s[j+i]=='o'||s[j+i]=='u')
            {
                c++;
            }
        }
          if (c>m)
        {
            re.clear();
            re=r;
            m=c;
        }
    }
    if(m==0){
    cout<<"Not found!"<<'\n';
    }
    else
    {
        for(auto element : re)
        {
        cout<<element;
        }
        cout<<'\n';
    }
    

}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  ll t=1;
  //cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}