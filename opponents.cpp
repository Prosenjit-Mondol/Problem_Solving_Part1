#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d;
    cin >> n >> d;
    int cnt=0,mx=0;
    for(int i=0;i<d;i++)
    {
        string s;
        cin >> s;
        int a=0;
        for(int j=0;j<s.size();j++)
        {
            if(s[j]=='0')
        {
            a=1;
            break;
        }
        }
        if(a==1)cnt++;
        else cnt=0;
        if(cnt>mx)mx=cnt;
    }
    cout << mx << endl;
}
