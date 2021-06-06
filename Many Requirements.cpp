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


ll a[60],b[60], c[60], d[60], n,m,q, mx=0;
vector<ll>v;
void back_track(ll s)
{
    if(v.sz==n)
    {
        ll sum=0;
        for(int i=0; i<q; i++)
        {
            if(v[b[i]-1]-v[a[i]-1]==c[i])
                sum+=d[i];
        }
        mx=max(mx, sum);
        return ;
    }

    for(int i=s; i<=m; i++)
    {
        v.pb(i);
        back_track(i);
        v.pop_back();
    }
}
int main()
{
   cin>>n>>m>>q;
   for(int i=0; i<q; i++)
   {
       sl(a[i]);sl(b[i]);sl(c[i]);sl(d[i]);
   }

   back_track(1);
   cout<<mx;
}
