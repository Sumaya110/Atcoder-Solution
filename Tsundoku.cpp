#include<bits/stdc++.h>
using namespace std;
#define ll          long long
#define endl        "\n"

ll a[200010], b[200010];
int main()
{
    ll n,m,k;
    cin>>n>>m>>k;

    for(int i=0; i<n; i++)
    {
        scanf("%lld",&a[i]);
        if(i) a[i]+=a[i-1];
    }
    for(int i=0; i<m; i++)
    {
        scanf("%lld",&b[i]);
        if(i) b[i]+=b[i-1];
    }
    ll ans=upper_bound(b,b+m,k)-b;
     for(ll i=0; i<n; i++)
     {
         if(k>=a[i])
         ans=max( ans, (upper_bound(b, b+m, k-a[i])-b)+i+1 );
     }

     cout<<ans<<endl;

}
