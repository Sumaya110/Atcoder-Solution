#include<bits/stdc++.h>
using namespace std;
#define ll          long long
#define endl        "\n"
#define si(a)       scanf("%d",&a)
#define si2(a,b)    scanf("%d%d",&a,&b)
#define sl(a)       scanf("%lld",&a)
#define sl2(a,b)    scanf("%lld%lld",&a,&b)
#define pb          push_back


ll a[200010], b[200010], seg[1000005], inf=1000000000; multiset<ll>ms[200010];

void update(ll node, ll b, ll e, ll ind,  ll val)
{
    if(ind>e || ind<b)
        return;
    if(ind==b && ind==e)
    {
        seg[node]=val;
        return;
    }

    ll mid=(b+e)/2;
    ll l=2*node;
    ll r=l+1;

    update(l, b, mid, ind, val);
    update(r, mid+1, e, ind, val);

    seg[node]=min(seg[l], seg[r]);
}

ll query(ll node, ll b, ll e, ll lf, ll rt)
{
    if(lf>e || rt<b)
        return 0;

    if(b>=lf && e<=rt)
        return seg[node];
    ll mid=(b+e)/2;
    ll l=2*node;
    ll r=l+1;

    ll p= query(l, b, mid, lf, rt);
    ll q=query(r, mid+1, e, lf, rt);

    return min(p,q);
}

int main()
{
    ll t,n,i,j,k,l,r,mn=0, mx=0;
    for(int i=0; i<=1000000; i++)
        seg[i]=inf;

    ll hi=200005;
    sl2(n,k);
    for(int i=1; i<=n; i++)
    {
        sl2(a[i], b[i]);
        ms[b[i]].insert(a[i]);

        auto it=ms[b[i]].end();
        it--;
        update(1LL, 1LL, hi, b[i], *it);

    }

    for(int i=1; i<=k; i++)
    {
        sl2(l,r);
        ms[b[l]].erase(a[l]);
        if(!ms[b[l]].empty())
        {
            auto it=ms[b[l]].end();
            it--;
            update(1LL, 1LL, hi, b[l], *it);

        }
        else
            update(1LL, 1LL, hi, b[l], inf);

        b[l]=r;
        ms[b[l]].insert(a[l]);
        auto it=ms[b[l]].end();
        it--;
        update(1LL, 1LL, hi, b[l], *it);

        ll ans=query(1LL, 1LL, hi, 1LL, hi);
        printf("%lld\n", ans);
    }
}
