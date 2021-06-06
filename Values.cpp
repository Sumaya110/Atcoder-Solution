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

ll a[500010], b[200010], ans=0;
map<ll,ll>vis;
vector<ll>g[200010];
void dfs(ll rt)
{
    vis[rt]=1;
    for(auto x: g[rt])
    {
        if(vis[x]==0)
        {
            ans+=b[x]-a[x];
            dfs(x);
        }
    }
}

int main()
{
    ll t,n,m,u,v,i,j,k,l,r,mn=0, mx=0;


    sl2(n,m);
    for(int i=1; i<=n; i++)
    {
        sl(a[i]);
    }
    for(int i=1; i<=n; i++)
    {
        sl(b[i]);
        ans+=b[i]-a[i];
    }

    if(m==0)
    {
        if(ans!=0) cout<<"No";
        else cout<<"Yes";
        return 0;
    }
    for(int i=1; i<=m; i++)
    {
        sl2(u,v);
        g[u].pb(v);
        g[v].pb(u);
    }


    for(int i=1; i<=n; i++)
    {
        if(vis[i]==0)
        {
            ans=0;
            dfs(i);
            ans+=b[i]-a[i];
            if(ans!=0)
            {
                cout<<"No";
                return 0;
            }
        }
    }
    cout<<"Yes";

}

