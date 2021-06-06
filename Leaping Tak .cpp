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
#define md          998244353
#define pi          acos(-1.0)

ll f[200010], sum[200010], l[20],r[20];
int main()
{
    ll t,n,i,j,k,lf, rt;
    sl2(n,k);
    for(int i=0; i<k; i++)
    {
        sl2(l[i],r[i]);

    }
    sum[1]=f[1]=1;
    for(int j=2; j<=n; j++)
    {
        for(int i=0; i<k; i++)
        {
            lf=max(1LL, j-r[i]);
            rt=j-l[i];
            if(rt<1)
                continue;
            f[j]=((f[j]+sum[rt]-sum[lf-1])%md+md)%md;
        }
        sum[j]= (sum[j-1]+f[j])%md;
    }
    cout<<f[n];//%md;
}


