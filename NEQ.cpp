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

ll f[500010];
int main()
{
   ll t,n,m,i,j,k,l,r,mn=0, mx=0;
   sl2(m,n);
   if(m>n)
   {
       cout<<0;
       return 0;
   }
   f[0]=f[1]=1;
   for(int i=2; i<=500000; i++)
   {
       f[i]=(f[i-1]*i)%md;
   }
   ll npr= (f[n]/f[n-m])%md;
   ll ncr=(f[n]/ (f[n-m]*f[m])%md)%md;
   ll q=(p- pp)%md;
   ll ans= (p*q)%md;
   cout<<p<<" "<<pp<<" "<<q<<endl;
  printf("%lld\n",ans);

}

