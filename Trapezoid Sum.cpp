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
#define mem(a,val)  memset(a, val, sizeof(a))
#define  all(v)     (v.begin(), v.end())

#define md          1000000007
#define pi          acos(-1.0)

ll a[500010];
map<ll,ll>m;
vector<ll>v;
string s,q;

int main()
{
   ll t,n,i,j,k,l,r,mn=0, mx=0,x,y;

   sl(t);
   while(t--)
   {
       sl2(l,r); l--;
       mn+=((r*(r+1))/2)- (l*(l+1))/2;


   }

   cout<<mn;
}

