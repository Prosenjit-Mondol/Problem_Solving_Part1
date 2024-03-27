#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define all(x) (x).begin(), (x).end()
using namespace std; 

const int N = 2e5+10;

char ar[2][N];
int n;

bool isvalid(int x, int y){
   return (x>=0 && x<2 && y>=0 && y<n);
}

int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};

int vis[2][N];

void dfs(int x, int y){
   if(!isvalid(x, y))return;

   if(vis[x][y])return;
   vis[x][y] = 1;

   for(int ii=0; ii<4; ii++){
      int a = x+dx[ii];
      int b = y+dy[ii];
      if(isvalid(a, b)){
         if(ar[a][b]=='>'){
            b++;
         }
         else b--;
         dfs(a, b);
      }
   }

}

int main() {
   FAST_IO;
   // start
   int t;
   cin>>t;
   read:
   while (t--) {
      cin>>n;

      for(int i=0; i<2; i++){
         for(int j=0; j<n+5; j++){
            vis[i][j] = 0;
         }
      }

      for(int i=0; i<2; i++){
         for(int j=0; j<n; j++){
            cin>>ar[i][j];
         }
      }

      dfs(0, 0);

      int res = vis[1][n-1];

      if(res)cout<<"YES\n";
      else cout<<"NO\n";


   
   }



   return 0;
}