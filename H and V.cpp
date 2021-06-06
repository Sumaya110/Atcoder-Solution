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

char s[10][10];
int main()
{
   int r,c,t,n,i,j,k,mn=0, mx=0;
   si2(r,c);
   si(t);
   for(int i=0; i<r; i++)
   {
       for(int j=0; j<c; j++)
       {
           cin>>s[i][j];
       }
   }
   int ans=0;
   for(int i=0; i<(1<<r); i++)
    {
        for(int j=0; j<(1<<c); j++)
        {
            int cnt=0;
            for(int k=0; k<r; k++)
            {
                for(int l=0; l<c; l++)
                {
                    if(s[k][l]=='#' && (i&(1<<k))==0 && (j&(1<<l))==0)
                        cnt++;
                }
            }
          //  cout<<cnt<<endl;
            ans+=cnt==t;
        }
    }
    cout<<ans;
}
