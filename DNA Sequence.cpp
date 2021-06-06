#include<bits/stdc++.h>
using namespace std;
#define ll long long

map<pair<ll,ll>, ll>m;

int main()
{
    ll n; string s;
    cin>>n>>s;
    m[{0LL, 0LL}]=1;
    ll ans=0, a=0, b=0, sum=0;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='A' ) a++;
        else if(s[i]=='C' ) b++;
        else if(s[i]=='T' ) a--;
        else b--;

      ans+=m[{a,b}];
      m[{a,b}]++;
    }

    cout<<ans;
}
