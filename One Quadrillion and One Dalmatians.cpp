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

vector<ll>v;
int main()
{
   ll t;
   sl(t);

   while(t>0)
   {
       if(t%26) v.pb(t%26), t=t/26;
       else v.pb(26), t= (t/26)-1;
   }
   for(int i=v.sz-1; i>=0; i--)
   cout<<(char)(v[i]-1+'a');
}
