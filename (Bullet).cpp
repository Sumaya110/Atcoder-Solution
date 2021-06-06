#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define md  1000000007

ll a[200010], b[200010];
map<ll,int>m;
//ll md=1000000007;
int main()
{
    ll n;
    cin>>n;
    ll ans=((n*(n-1))/2)%md;
    ans+=n;
    ans%=md;
    ll cnt=0;
    for(int i=0; i<n; i++)
    {
        scanf("%lld%lld", &a[i], &b[i]);
        ll p=a[i]*b[i];
        m[p]++;
    }

    for(int i=0; i<n; i++)
    {
        ll p=a[i]*b[i]*(-1);
        cnt+=m[p];
        cnt%=md;
    }
    cnt/=2;
    ans= ((ans-cnt)%md + md)%md;
    cout<<ans;
}
