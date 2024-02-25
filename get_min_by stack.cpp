//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll=long long ;
ll mod = 1e9 + 7;
stack<int>s;
//------------------------------------------------------------------------------

void push(stack<int>& s, int a){
	s.push(a);
}

bool isFull(stack<int>& s,int n){
	if(n==s.size()) return true;
	else return false;
}

bool isEmpty(stack<int>& s){
	if(s.empty()==0) return true;
	else false;
}

int pop(stack<int>& s){
	s.pop();
}

int getMin(stack<int>& s){
	int m=0;
	m=min(m,s.top());
	s.pop();
}

void solve(void)
{
    int a,n;
    cin>>n;
    while (!isEmpty(s))
    {
        pop(s);
    }
    while (!isFull(s,n))
    {
        cin>>a;
        push(s,a);
    }
    
    cout<<getMin(s)<<'\n';
}


//------------------------------------------------------------------------------
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