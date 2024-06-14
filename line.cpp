#include<bits/stdc++.h>
using namespace std;
int  main()
{

int t;
cin>>t;
while(t--)
{
    int n;
    string s;
    cin>>n>>s;
long long int tot=0;
vector<long long>v(n);
for(int i=0;i<n;i++)
{
    if(s[i]=='L'){v.push_back((n-1-i)-i);tot+=i;}
    else{v.push_back(i-(n-1-i));tot+=(n-1-i);}
}
sort(v.begin(),v.end(),greater<>());
for(int i=0;i<n;i++)
{

    if(v[i]>0){tot+=v[i];}
    cout<<tot<<' ';
}
cout<<endl;
}
return 0;
}