#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

ll  a[110];
map< pair< int,pair<int,int>> , int>mp;
int main()
{
    ll n, cnt=0; cin>>n;
    for(int i=0; i<n; i++)
        cin>>a[i];
    sort(a, a+n);

    if(n<3) cout<<0;
    else
    {for(int i=0; i<n-2; i++)
    {
        for(int j=i+1; j<n-1; j++)
        {
            for(int k=j+1; k<n; k++)
            {
                if(a[i]+a[j]>a[k] && a[i]!=a[j] && a[j]!=a[k] && a[i]!=a[k])
                {
                    if(mp[{i,{j,k}}]==0 ) cnt++,mp[{i,{j,k}}]=1;
                }
            }
        }
    }
    cout<<cnt;}
}
