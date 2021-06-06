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

ll a[200010];
map<ll,ll>m;
vector<ll>v;
string s,q;

int main()
{
   ll t,n,i,j,k,l,mn=0, mx=0;
   cin>>n>>s;

   int f=0, w=0, r=0;
   for(int i=s.size()-1; i>=0; i--)
   {
       if(s[i]=='R')
       {
           r++;
           f=1;
          // break;
       }
       else
       {
           if(f==1)
            w++;
       }
   }
   int rr=r;
   for(int i=0; i<r; i++)
   {
       if(s[i]=='R') rr--;
   }

   cout<<min(rr,w);
}


