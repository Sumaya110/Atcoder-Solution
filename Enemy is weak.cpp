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
#define sz          size()


ll a[1000005], bit[1000005], n;

ll sum( ll index)
{
    ll s=0;
    while(index>0)
    {
        s+=bit[index];
        index=index - (index & -index);
    }
    return s;
}


void update_bit( ll index, ll val)
{
    while(index<=n)
    {
        bit[index]+=val;
        index=index + (index & -index);
    }
}

vector<pair<ll,int>>p;
vector<ll>g,s, pp;
int main()
{
    sl(n);

    for(int i=1; i<=n; i++)
    {
        sl(a[i]); p.pb({a[i],i});

    }

    sort(p.begin(), p.end());

    for(int i=0; i<n; i++)
    {
        a[p[i].second]=i+1;
        pp.pb(i+1);
    }
    sort(pp.begin(), pp.end());
    ll greater_than, smaller_than, ans=0;
    for(int i=n; i>=1; i--)
    {
        update_bit(a[i], 1LL);
        greater_than= sum(a[i]-1);
        ll q=(n-i)-greater_than; // right side e koyta boro element ache
        ll smaller_than= (n-a[i])-q;  // left side e koyta boro element ache

        ans+= (smaller_than*greater_than);

    }

    cout<<ans<<endl;
}

/*

7
8 9 5 6 10 11 3

*/
