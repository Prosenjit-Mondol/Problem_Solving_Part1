#include<bits/stdc++.h>
using namespace std;
const int mx=1e7+123;
int arr[mx];

int main()
{
  int n;
  cin>>n;
  
  for(int i=1;i<=n;i++){
    for(int j=i;j<=n;j+=i){
      arr[j]++;
    }
  }
  long long int ans=0;
  for(int i=1;i<=n;i++){
    ans+=(1LL*i*arr[i]);
  }
  cout<<ans<<'\n';
}