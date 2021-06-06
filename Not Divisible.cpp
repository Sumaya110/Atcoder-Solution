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

ll a[200010], m[1000005];
int main()
{
    ll t,n,i,j,k,l,r,mn=0, mx=1;
    sl(n);
    ll cnt=0;
    for(int i=0; i<n; i++)
    {
        sl(a[i]); m[a[i]]++;
    }

    ll f =0;
    for(int i=0; i<n; i++)
    {
        f=0;
        if(m[a[i]]>1) continue;
        for(ll j=1; j*j<=a[i]; j++)
        {

            if(a[i]%j==0)
            {
                if(m[j]>0 && j!=a[i]) f=1;

                ll p=a[i]/j;
                if(m[p]>0 && p!=a[i]) f=1;
            }
        }
        //cout<<a[i]<<" "<<f<<endl;
        if(f==0) cnt++;
    }
  cout<<cnt;
}
