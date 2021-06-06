#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

vector<ll>v;
map<ll,ll>mp;
ll a[3005];
int main()
{
    ll n, m, b;
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(int i=0; i<m; i++)
    {
        cin>>b; v.pb(b);
    }

    sort(v.begin(), v.end());
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        auto p=upper_bound(v.begin(), v.end(), a[i]-1);
        if(p==v.end()) cnt++;
        else
        {
            v.erase(p);
        }
    }

    cout<<cnt;
}
