#include<bits/stdc++.h>
using namespace std;
#define ll          long long
#define ld          long double

#define si(a)       scanf("%d",&a)
#define si2(a,b)    scanf("%d%d",&a,&b)
#define sl(a)       scanf("%lld",&a)
#define sl2(a,b)    scanf("%lld%lld",&a,&b)

#define pfi(a)      printf("%d", a)
#define pfl(a)      printf("%lld", a)
#define el          printf("\n");
#define pfY         printf("YES\n")
#define pfN         printf("NO\n")
#define pfy         printf("Yes\n")
#define pfn         printf("No\n")



#define loop(n)     for(int i=0; i<n; i++)
#define FOR(a,b)    for(int i=a; i<=b; i++)

#define pb          push_back
#define mk          make_pair
#define sz          size()
#define ff          first
#define ss          second
#define pll         pair<ll,ll>
#define pii         pair<int, int>
#define mem(a,val)  memset(a, val, sizeof(a))
#define  all(v)     (v.begin(), v.end())

#define md          1000000007
#define pi          acos(-1.0)


pll p[110];
int main()
{
   ll t,n,m,i,j,k,l,r,mn=0, mx=0,ans=0,x,y;

   t=1;//sl(t);
   while(t--)
   {
       sl2(n,m);
       loop(n+1)
       p[i].ff=10000LL, p[i].ss=0LL;

       for(int i=0; i<m; i++)
       {
           sl2(l,r);
           sl2(x,y);
           for(int j=l; j<=r; j++)
           {
               if(p[j].ff>x)
               {
                   p[j].ff=x;
                   p[j].ss=y;
               }
           }
       }

       loop(n+1)
       ans+=p[i].ss;
       pfl(ans);
   }

}

