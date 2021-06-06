#include<bits/stdc++.h>
using namespace std;
#define ll          long long
#define ld          long double

#define si(a)       scanf("%d",&a)
#define si2(a,b)    scanf("%d%d",&a,&b)
#define si3(a,b,c)  scanf("%d%d%d",&a,&b,&c)
#define sl(a)       scanf("%lld",&a)
#define sl2(a,b)    scanf("%lld%lld",&a,&b)
#define sl3(a,b, c)    scanf("%lld%lld%lld",&a,&b,&c)

#define pfi(a)      printf("%d", a)
#define pfl(a)      printf("%lld", a)
#define pf(a)       printf("a")
#define el          printf("\n");
#define YES         printf("YES\n")
#define NO          printf("NO\n")
#define Yes         printf("Yes\n")
#define No          printf("No\n")
#define yes         printf("yes\n")
#define no          printf("no\n")
#define space       printf(" ")
#define loop(i,a,b) for(int i=a; i<=b; i++)
#define pll         pair<ll,ll>
#define pii         pair<int, int>

#define sq(a)       (a)*(a)

#define pb          push_back
#define mk          make_pair
#define sz          size()
#define ff          first
#define ss          second
#define mem(a,val)  memset(a, val, sizeof(a))
#define all(v)      v.begin(), v.end()

#define md          1000000007
#define pi          acos(-1.0)
#define inf         1000000000000

#define p(a, b, e)  for(int i=b; i<=e; i++) printf("%lld ", a[i]);
#define csh         printf("Case #%d: ", ++cs)
#define csc         printf("Case %d: ", ++cs)


#define fast1 ios::sync_with_stdio(false);
#define fast2 cin.tie(nullptr);

int x[5]= {0, 1, 0, -1};
int y[5]= {1, 0, -1, 0};

ll a[500010], b[500010];
map<ll,ll>mp, vis;
vector<ll>v;
vector<pll>vp;
string s,q;
char c;

ll  check(ll n)
{
    ll sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];


    bool dp[n+1][sum+1];
    for (int i = 0; i <= n; i++)
        dp[i][0] = true;

    for (int i = 1; i <= sum; i++)
        dp[0][i] = false;

    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=sum; j++)
        {

            dp[i][j] = dp[i-1][j];
            if (a[i-1] <= j)
                dp[i][j] |= dp[i-1][j-a[i-1]];

        }
    }


    /*for(int i=0; i<n; i++)
    {
        for(int j=0; j<=sum; j++)
        {
            if(dp[i][j])
            {
                ll p = abs(pp-j);
                if(mn>p)
                {
                    mn=p;
                    ans=j;
                }
            }

        }
    }*/

    ll ans=0;
    for (int j=sum/2; j>=0; j--)
    {
        if (dp[n][j] == true)
        {
            ans = sum-2*j;
            break;
        }
    }
    return ans;
}
int main()
{
    ll t,n,k,m,mn=0, mx=0,sum=0, ans=0,nm=0,cnt=0,x,y,z;
    int  cs=0;

    sl(n);
    for(int i=0; i<n; i++)
    {
        sl(a[i]);
        sum+=a[i];
    }

    ll pp = check(n);
    ll p= pp/2;
    if(pp%2) p++;
    ans = sum/2;
    ans+=p;
    pfl(ans);


}

