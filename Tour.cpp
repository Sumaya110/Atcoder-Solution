#include<bits/stdc++.h>
using namespace std;
#define ll          long long
#define ld          long double

#define si(a)       scanf("%d",&a)
#define si2(a,b)    scanf("%d%d",&a,&b)
#define si3(a,b,c)  scanf("%d%d%d",&a,&b,&c)
#define sl(a)       scanf("%lld",&a)
#define sl2(a,b)    scanf("%lld%lld",&a,&b)
#define sl3(a,b, c)    scanf("%lld%lld%lld",&a,&b,&c)

#define pfi(a)      printf("%d", a)
#define pfl(a)      printf("%lld", a)
#define pf(a)       printf("a")
#define el          printf("\n");
#define YES         printf("YES\n")
#define NO          printf("NO\n")
#define Yes         printf("Yes\n")
#define No          printf("No\n")
#define yes         printf("yes\n")
#define no          printf("no\n")
#define space       printf(" ")
#define loop(i,a,b) for(int i=a; i<=b; i++)
#define pll         pair<ll,ll>
#define pii         pair<int, int>

#define sq(a)       (a)*(a)

#define pb          push_back
#define mk          make_pair
#define sz          size()
#define ff          first
#define ss          second
#define mem(a,val)  memset(a, val, sizeof(a))
#define all(v)      v.begin(), v.end()

#define md          1000000007
#define pi          acos(-1.0)
#define inf         1000000000000

#define p(a, b, e)  for(int i=b; i<=e; i++) printf("%lld ", a[i]);
#define csh         printf("Case #%d: ", ++cs)
#define csc         printf("Case %d: ", ++cs)


#define fast1 ios::sync_with_stdio(false);
#define fast2 cin.tie(nullptr);

int x[5]= {0, 1, 0, -1};
int y[5]= {1, 0, -1, 0};

ll a[500010], b[500010];
map<ll,ll>mp, vis;
vector<ll>v, g[2005];
vector<pll>vp;
string s,q;
char c;
void dfs(ll rt, ll &cnt)
{
    vis[rt]=1;
    cnt++;
    //cout<<"pp"<<endl;

    for(auto x: g[rt])
    {
        if(vis[x]==0)
        {
            //cout<<"pp"<<endl;
            dfs(x, cnt);
        }
    }
}
int main()
{
    ll t,n,k,m,l,r,mn=0, mx=0,sum=0, ans=0,nm=0,cnt=0,x,y,z;
    int  cs=0;

    sl2(n,m);
    for(int i=0; i<m; i++)
    {
        sl2(a[i], b[i]);
        g[a[i]].pb(b[i]);
    }

    for(ll i=1; i<=n; i++)
    {
        cnt=0;
        vis.clear();
        dfs(i, cnt);
        ans += cnt;
    }
    pfl(ans);

}
