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


int main()
{
   long double a,b,h,m;
   cin>>a>>b>>h>>m;
   h=h*30 + m*.5;
   m=m*6;

   long double dif=abs(m-h);
   long double pp= (pi*dif)/180;

   long double ans= a*a + b*b - 2*a*b*(cos(pp));
   ans= sqrt(ans);

   cout<< setprecision(10)<<fixed<<ans<<endl;
}
