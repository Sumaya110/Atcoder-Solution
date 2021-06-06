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

ll a[200010], cnt=0;
bool vis[100010];
vector<ll>g[100010];
void dfs(ll rt)
{
    vis[rt]=1;
    int f=0;
    for(auto x: g[rt])
    {
        if(a[x]>=a[rt]) f=1;
    }
    if(!f) cnt++;
}

int main()
{
   ll t,n,i,j,k,l,r,mn=0, mx=0,m,u,v;

   sl2(n,m);
   for(int i=1; i<=n; i++)
    sl(a[i]);

   for(int i=0; i<m; i++)
   {
       sl2(u,v);
       g[u].pb(v);
       g[v].pb(u);
   }

   for(int i=1; i<=n; i++)
   {
       if(vis[i]==0)
       {
           if(g[i].sz==0) cnt++, vis[i]=1;
           else dfs(i);
       }
   }
   cout<<cnt;

}

