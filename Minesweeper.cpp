#include<bits/stdc++.h>
using namespace std;
#define ll          long long
#define ld          long double

#define si(a)       scanf("%d",&a)
#define si2(a,b)    scanf("%d%d",&a,&b)
#define sl(a)       scanf("%lld",&a)
#define sl2(a,b)    scanf("%lld%lld",&a,&b)

#define pfi(a)      printf("%d ", a)
#define pfl(a)      printf("%lld ", a)
#define el          printf("\n");
#define pfY         printf("YES\n")
#define pfN         printf("NO\n")
#define pfy         printf("Yes\n")
#define pfn         printf("No\n")

#define loop(n)     for(int i=0; i<n; i++)
#define FOR(a,b)    for(int i=a; i<=b; i++)
#define pll         pair<ll,ll>
#define pii         pair<int, int>

#define pb          push_back
#define mk          make_pair
#define sz          size()
#define ff          first
#define ss          second
#define mem(a,val)  memset(a, val, sizeof(a))
#define  all(v)     v.begin(), v.end()

#define md          1000000007
#define pi          acos(-1.0)

ll a[500010], b[500010];
map<ll,ll>mp, vis;
vector<ll>v;
vector<pll>vp;
string s[110];
char c;

int main()
{
   ll t,n,k,m,l,r,mn=0, mx=0,ans=0,nm=0,cnt=0,x,y,z, cs=0;

   int f=0;

   while(sl2(n,m)==2)
   {
       if(n==0 && m==0) return 0;
       if(f)el;
       f++;
       string q[110];
       for(int i=0; i<n; i++) cin>>s[i];



       for(int i=0; i<n; i++)
       {
           for(int j=0; j<m; j++)
           {
               if(s[i][j]=='*') q[i]+=s[i][j];
               else
               {
                   cnt=0;
                   if( i-1>=0 && s[i-1][j]=='*' ) cnt++;
                   if(j-1>=0 &&  s[i][j-1]=='*') cnt++;
                   if(i-1>=0 && j-1>=0 && s[i-1][j-1]=='*') cnt++;
                   if(i-1>=0 && j+1<m && s[i-1][j+1]=='*') cnt++;
                   if(j+1<m && s[i][j+1]=='*') cnt++;
                   if(i+1<n && j-1>=0 && s[i+1][j-1]=='*') cnt++;
                   if(i+1<n && s[i+1][j]=='*') cnt++;
                   if(i+1<n && j+1<m && s[i+1][j+1]=='*') cnt++;


                   string pp=to_string(cnt);
                   q[i]+=pp;
               }
           }
       }

       //cout<<"ndsk;"<<endl;
       printf("Field #%lld:\n", ++cs);
       for(int i=0; i<n; i++)
       {
           cout<<q[i];
           el;
       }

   }
}

