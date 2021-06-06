#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll a[30][30], c[30], b[30];
int main()
{
    ll n,m,x;
    cin>>n>>m>>x;

    for(int i=0; i<n; i++)
    {
        cin>>c[i];
        for(int j=0; j<m; j++)
            cin>>a[i][j];
    }


    int f;
    ll cost=0, mn=1e18;
    for(int i=0; i<(1<<n); i++)
    {
        memset(b, 0, sizeof(b));
        cost=0;
        for(int j=0; j<n; j++)
        {
            if(i & (1<<j))
            {
                cost+=c[j];
                for(int k=0; k<m; k++)
                    b[k]+=a[j][k];
            }
        }
        f=0;
        for(int k=0; k<m; k++)
         if(b[k]<x) f=1;

        if(!f) mn=min(mn, cost);
    }


    if(mn==1e18) cout<<"-1";
    else cout<<mn;
}
