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

    vector<char>r;
    vector<char>::iterator it;
    it=r.begin();
    for (int i = 0; i < s.length(); i++)
    {
        
        if(s[i]=='B' || s[i]=='b')
        {
            
            if (s[i]=='B')
            {
                for (int i =r.size()-1; i>=0; i--)
                {
                    if (r[i]>='A'||r[i]<='Z')
                    {
                        r.erase(it+i,it+i+1);
                    }
                }
            }
            else
            {
                for (int i =r.size()-1; i>=0; i--)
                {
                    if (r[i]>='a'||r[i]<='z')
                    {
                        r.erase(it+i,it+i+1);
                    }
                    
                }
            }
            
            
        }
        else
        {
            r.push_back(s[i]);
        }
    }

    for(auto element : r)
    {
    cout<<element;
    }

}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  ll t=1;
  cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}