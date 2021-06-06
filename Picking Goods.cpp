#include<bits/stdc++.h>
using namespace std;
#define ll          long long
#define endl        "\n"

ll g[3010][3010], dp[3010][3010][5];
int r,c,k,x,y;

ll solve(int rr, int cc, int cnt)
{
    if(rr>r || rr<1 || cc>c || c<1) return 0;
    if(dp[rr][cc][cnt]!= -1) return dp[rr][cc][cnt];

    ll ans=0;
    ans = max({solve(rr,cc+1,cnt), solve(rr+1, cc, 0), ans});
    if(cnt<3)
        ans = max({g[rr][cc]+solve(rr,cc+1,cnt+1), g[rr][cc]+solve(rr+1, cc, 0), ans});

    dp[rr][cc][cnt]=ans;
    return ans;
}
int main()
{
    memset(dp, -1, sizeof(dp));
    cin>>r>>c>>k;
    for(int i=0; i<k; i++)
    {
        cin>>x>>y;
        cin>>g[x][y];
    }

    cout<<solve(1,1,0);
}
