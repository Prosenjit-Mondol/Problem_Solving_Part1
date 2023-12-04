#include<bits/stdc++.h>
#include<tuple>
#include<utility>
#include<algorithm>
using namespace std;
const int inf = 3e5;
using ll=unsigned long long ;

string subtract(string a,string b) {
    while (a.size() < b.size() || (a.size() == b.size() && a < b)) {
        a = "0" + a;
    }

    int bb = 0;
    for (int i = a.size() - 1; i >= 0; --i) {
        int digit = (a[i] - '0') - (b[i] - '0') - bb;
        if (digit < 0) {
            digit += 10;
            bb= 1;
        } else {
            bb= 0;
        }
        a[i] = digit + '0';
    }
    while (a.size() > 1 && a[0] == '0') {
        a.erase(a.begin());
    }
    return a;
}

 string gcd(string a,string b){
    while (b != "0") {
        string remainder = subtract(a, b);
        a = b;
        b = remainder;
    }
    return a;
 }

void solve(void)
{
    string a,b;
    cin>>a>>b;
    if (a.size() > b.size() || (a.size() == b.size() && a > b)) {
        std::swap(a, b);
    }

    string re=gcd(a,b);
    cout<<re<<'\n';
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