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

ll a[200010], b[200010];
map<ll,ll>ma, mb;
vector<ll>v;
string s,q;

int main()
{
   ll t,n,i,j,k,mn=0, mx=0;

       sl(n);
       for(int i=0; i<n; i++)
       {
           sl(a[i]);
           ma[a[i]]++;
       }
       for(int i=0; i<n; i++)
       {
           sl(b[i]);
           mb[b[i]]++;
       }
       for(int i=0; i<n; i++)
        {
            if(ma[a[i]]+mb[a[i]]>n)
            {
                cout<<"No"<<endl;
                return 0;
            }
        }

        //sort(b, b+n);
        reverse(b, b+n);

        int l=0, r=n-1;

        for(int i=0; i<n; i++)
        {
            if(a[i]==b[i])
            {
                if(b[l]!=b[i] && b[i]!=a[l])
                    swap(b[i], b[l]), l++;
                else if(b[r]!=b[i] && b[i]!=a[r])
                    swap(b[r], b[i]), r--;
            }
        }

        cout<<"Yes"<<endl;
        for(int i=0; i<n; i++)
        cout<<b[i]<<" ";

}


