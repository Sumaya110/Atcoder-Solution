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

ll a[200010], n,k;
bool solve(ll x)
{
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        cnt+=(a[i]-1)/x;
    }
    return (cnt<=k);
}
int main()
{
    ll hi=0;
    sl2(n,k);
    ll ans=0;
    for(int i=0; i<n; i++)
    {
        sl(a[i]);
        hi=max(hi, a[i]);
    }
    if(k==0)
    {
        cout<<hi;
        return 0;
    }
    ll lo=1, mid;
    while(lo<=hi)
    {
        mid=(lo+hi)/2;
        if(solve(mid))
        {
            hi=mid-1;
            ans=mid;
        }
        else
         lo=mid+1;
    }
    cout<<ans;
}
