#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll>g[200010];
ll a[200010], pp[200010];
map<ll,ll>m;
int main()
{
    ll n,k,b;
    cin>>n>>k;
    m.clear();

    for(int i=1; i<=n; i++)
    {
        scanf("%lld", &a[i]);
    }

    ll p=k;
    ll in=1, cnt=0, s=0,e=0;
    for(int i=1; i<=k; i++)
    {
        in=a[in];
        if(m[in])
        {
            s=m[in];
            e=cnt-1; break;
        }
        m[in]=cnt;
        pp[cnt]=in;
        cnt++;
    }

    if(k<=e || e==0)
    {
        cout<<pp[k-1];
    }
    else
    {
        k-=s;
        k%=(e-s+1);
        if(k==0) k=(e-s+1);
        cout<<pp[k+(s-1)];
    }
}
/*
5 4
3 4 2 5 1
*/
