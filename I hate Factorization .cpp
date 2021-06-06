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


map<ll,ll>m;
int main()
{
   ll t,n,i,j,x;

   for(i=1; i<=120; i++)
   {
       ll p=pow(i,5);
       m[i]=p;
   }
   cin>>x;
   for(int i=0; i<=120; i++)
   {
       for(int j=i; j<=120; j++)
       {
           if(m[j]-m[i]==x)
           {
               cout<<j<<" "<<i<<endl;
               return 0;
           }
           if(m[j]+m[i]==x)
           {
               cout<<j<<" -"<<i<<endl;
               return 0;
           }
       }
   }
}

