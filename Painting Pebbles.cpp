#include<bits/stdc++.h>
using namespace std;
#define pb push_back

int a[110];
vector<int>v[110];
map<int,int>m, mp;
int main()
{
    int n,k, mn=INT_MAX, mx=0;
    cin>>n>>k;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        mn=min(mn, a[i]);
        mx=max(mx, a[i]);
    }

    if((mn+k)<mx)
    {
        cout<<"NO";
        return 0;
    }
    int j=1, cnt=0, cc=0;
    for(int i=0; i<n; i++)
    {
        cc=0;
        mp.clear();
        j=1;
        while(1)
        {
            v[i].pb(j),mp[j]++, cc++;

            j++;
            if(j>k)
                j=1;

            if(cc==a[i])
                break;
        }

        if(v[i].size()<a[i])
        {
            int p=a[i]-v[i].size();
            for(int j=1; j<=p; j++)
                v[i].pb(j), mp[j]++;
        }
    }

    cout<<"YES"<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<a[i]; j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}
