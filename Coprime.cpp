#include<bits/stdc++.h>
using namespace std;
#define ll          long long
#define endl        "\n"
#define si(a)       scanf("%d",&a)
#define si2(a,b)    scanf("%d%d",&a,&b)
#define si3(a,b,c)  scanf("%d%d%d",&a,&b,&c)
#define sl(a)       scanf("%lld",&a)
#define sl2(a,b)    scanf("%lld%lld",&a,&b)
#define sl3(a,b,c)  scanf("%lld%lld%lld",&a,&b,&c)
#define pb          push_back
#define mk          make_pair
#define loop(n)     for(int i=0; i<n; i++)
#define FOR(a,b)    for(int i=a; i<=b; i++)
#define sz          size()
#define pY          printf("YES")
#define pN          printf("NO")
#define py          printf("Yes")
#define pn          printf("No")
#define mem(a,val)  memset(a, val, sizeof(a))
#define md          1000000007



ll mx=1000000;
ll a[1000010];
vector<ll>p[1000005];
bool vis[1000005], m[1000005];
void prime_generate()
{
    for(ll i=2; i<=mx; i++)
    {
        if(!vis[i])
        for(ll j=i; j<=mx; j+=i)
        {
            vis[j]=1;
            p[j].pb(i);
        }
    }
}

int main()
{
    ll n;;

    prime_generate();
    sl(n);

    for(int i=1; i<=n; i++)
    {
        sl(a[i]);

    }

    bool f=0;
    for(int i=1; i<=n; i++)
    {
        for(auto x : p[a[i]])
        {
            //cout<<x<<endl;
            if(m[x])
            {
                f=1;
                break;
            }
            m[x]=1;
        }

        if(f)
            break;
    }

    ll g=a[1];
    for(int i=2; i<=n; i++)
    {
        g=__gcd(g, a[i]);

    }


    if(!f)
        cout<<"pairwise coprime";
    else if(g==1)
        cout<<"setwise coprime";
    else
        cout<<"not coprime";

}






