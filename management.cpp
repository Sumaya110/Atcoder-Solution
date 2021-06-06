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


map<ll,ll>m;
int main()
{
    ll a,t,n,i,j,k,l,r,mn=0, mx=0;

    sl(n);
    for(int i=1; i<n; i++)
    {
        sl(a);
        m[a]++;
    }

    for(int i=1; i<=n; i++)
        cout<<m[i]<<endl;

}

