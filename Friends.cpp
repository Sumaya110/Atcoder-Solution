#include<bits/stdc++.h>
using namespace std;
#define ll          long long
#define endl        "\n"
#define si(a)       scanf("%d",&a)
#define si2(a,b)    scanf("%d%d",&a,&b)
#define si3(a,b,c)  scanf("%d%d%d",&a,&b,&c)
#define sl(a)       scanf("%lld",&a)
#define sl2(a,b)    scanf("%lld%lld",&a,&b)
#define sl3(a,b,c)  scanf("%lld%lld%lld",&a,&b,&c)
#define pb          push_back
#define mk          make_pair
#define loop(n)     for(int i=0; i<n; i++)
#define FOR(a,b)    for(int i=a; i<=b; i++)
#define sz          size()
#define pY          printf("YES")
#define pN          printf("NO")
#define py          printf("Yes")
#define pn          printf("No")
#define mem(a,val)  memset(a, val, sizeof(a))



vector<ll>g[200005];
bool vis[200005];
ll cnt=0;
void dfs(ll rt)
{
    vis[rt]=1;
    cnt++;
    //mx=max(mx, cnt);
    //cout<<rt<<" "<<mx<<" "<<cnt<<endl;
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
   ll n,m,a,b;
   sl2(n,m);

   for(int i=0; i<m; i++)
   {
       sl2(a,b);
       g[a].pb(b);
       g[b].pb(a);
   }

   ll mx=0;
   for(int i=1; i<=n; i++)
   {
       if(vis[i]==0)
       {
           cnt=0;
           dfs(i);
           mx=max(mx, cnt);
       }
   }

   cout<<mx<<endl;
}
