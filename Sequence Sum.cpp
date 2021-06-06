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

ll dp[100005];
int main()
{
    ll t,x,n,i,j,k,l,mn=0, mx=0, m;
    cin>>n>>x>>m;
    ll ans=0;
    dp[1]=x;
    ans+=x;

    for(int i=2; i<=min(n,m); i++)
        dp[i]=(dp[i-1]*dp[i-1])%m, ans+=dp[i];


    if(n>m)
    {
        ll r=(dp[m]*dp[m])%m;
        int in=0;
        for(int i=1; i<=m; i++)
            if(dp[i]==r)
            {
                in=i;
                break;
            }

        ans=0;
        ll sum=0;
        for(int i=1; i<in; i++)
         ans+=dp[i];

        int cy=m-in+1;
        int koybar= (n-in+1)/cy;
        int rem=(n-in+1)%cy;
        for(int i=in; i<=m; i++)
            sum+=dp[i];
        ans+= sum*koybar;

        for(int i=in; i<in+rem; i++)
            ans+=dp[i];

    }
    cout<<ans;
}

