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

ll a[200010];
map<ll,ll>m;
vector<ll>v;
string s,q;

int main()
{
    ll t,n,i,j,k,l,r,mn=0, mx=0;
    sl2(t,n);
    for(int i=0; i<n; i++)
    {
        sl(k); m[k]=1;
    }
    for(int i=0; i<=105; i++)
    {
        if(m[t+i]==0)
        {
            r=t+i;
            break;
        }
    }
    for(int i=0; i<=105; i++)
    {
        if(m[t-i]==0)
        {
            l=t-i;
            break;
        }
    }

    if(abs(l-t)<= abs(r-t))
        cout<<l<<endl;
    else
        cout<<r<<endl;
}


