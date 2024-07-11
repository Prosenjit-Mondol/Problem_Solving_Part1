//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll=long long ;
ll mod = 1e9 + 7;

//------------------------------------------------------------------------------
bool isOperand(char c){
    if ((c>='0' && c<='9') || (c>='a'&&c<='z') || (c>='A'&&c<='Z'))
    
    {
        return true;
    }
    return false;
}

int precedence(char c){
    if (c=='^')
    {
        return 3;
    }
    else if (c=='/' || c=='*')
    {
        return 2;
    }
    else if (c=='+' || c=='-')
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}

void solve(void)
{
    string s,r;
    cin>>s;
    int i=0;
    stack<char>st;
    st.push('(');
    while (st.size())
    {
        if (isOperand(s[i]))
        {
            r+=s[i];
        }
        else if (s[i]=='(')
        {
            st.push('(');
        }
        else if (s[i]==')')
        {
            while (st.top()!='(')
            {
                r+=st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            while (!st.empty() && precedence(s[i])<=precedence(st.top()))
            {
                r+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
        i++;
    }
    while (!st.empty())
    {
        r+=st.top();
        st.pop();
    }
    cout<<r<<'\n';
}


//------------------------------------------------------------------------------
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