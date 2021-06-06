#include<bits/stdc++.h>
using namespace std;
#define ll          long long
#define endl        "\n"
#define si(a)       scanf("%d",&a)
#define si2(a,b)    scanf("%d%d",&a,&b)
#define sl(a)       scanf("%lld",&a)
#define sl2(a,b)    scanf("%lld%lld",&a,&b)
#define pb          push_back
#define mk          make_pair
#define loop(n)     for(int i=0; i<n; i++)
#define FOR(a,b)    for(int i=a; i<=b; i++)
#define sz          size()
#define ff          first
#define ss          second
#define mem(a,val)  memset(a, val, sizeof(a))
#define md          1000000007
#define pi          acos(-1.0)

vector<int>g[100010];
bool vis[100010];
void dfs(int rt)
{
    vis[rt]=1;
    for(auto x: g[rt])
    {
        if(vis[x]==0)
        {
            dfs(x);
        }
    }
}
int main()
{
   int n,m,a,b, cnt=0;
   cin>>n>>m;
   for(int i=0; i<m; i++)
   {
       si2(a,b);
       g[a].pb(b); g[b].pb(a);
   }

   for(int i=1; i<=n; i++)
   {
       if(vis[i]==0)
       {
           dfs(i);
           cnt++;
       }
   }
   cout<<cnt-1;
}

