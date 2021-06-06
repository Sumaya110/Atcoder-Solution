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

ll a[100010],ans=0;
bool vis[100010];
vector<ll>g[100005];

void dfs(ll rt, ll p)
{
    a[rt]=1;
    for(auto q: g[rt])
    {
        if(q!=p)
        {
            dfs(q, rt);
            a[rt]+=a[q];
        }
    }

}

void dfs2(ll rt)
{
    vis[rt]=1;
    ll mxx=0, uu=-1;
    for(auto q: g[rt])
    {
        if(vis[q]==0)
        {
            vis[q]=1;
            if(mxx<a[q])
            {
                mxx=a[q]; uu=q;
            }
        }
    }
    //cout<<uu<<" "<<a[uu]<<endl;
    if(uu!=-1)
    {ans+=a[uu];
    dfs2(uu);}
}

int main()
{
    ll t,i,j,k,l,u,v,n;
    sl(t);
    while(t--)
    {
        mem(vis, 0);
        mem(a, 0);

        sl(n);
        for(int i=2; i<=n; i++)
        {
            sl(u);
            g[u].pb(i);
            g[i].pb(u);
        }

        dfs(1LL, 0LL);
        ans=0;
        dfs2(1LL);
        ans+=n;
        printf("%lld\n", ans);

        /*for(int i=1; i<=n; i++)
        {
            cout<<a[i]<< " ";
        }*/

        for(int i=1; i<=n; i++)
            g[i].clear();
    }
}

