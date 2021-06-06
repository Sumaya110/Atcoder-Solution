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
map<ll,ll>m, vis;
vector<ll>v;
string s,q;
char c;
int main()
{
    ll t,n,i,j,k,l,r,mn=0, mx=0,x,y;

    cin>>s;
    for(int i=0; i<s.sz; i++)
    {
        m[s[i]]++;
    }
    if(s.sz<3)
    {

        ll ten=1;
        for(int i=0; i<s.sz; i++)
        {
            c=(char) s[i] -'0' ;
            mn+=ten*c;
            //cout<<mn<< " "<<c<<endl;
            ten*=10;
        }
        if(mn%8==0)
        {
            pfy;
            return 0;
        }
        //cout<<mn<<endl;
        mn=0;
        ten=1;
        for(int i=s.sz-1; i>=0; i--)
        {
            c=(char) s[i] -'0' ;
            mn+=ten*c; ten*=10;
        }

        if(mn%8==0)
        {
            pfy;
            return 0;
        }

        pfn; return 0;
    }
    else
    {
        for(ll i=100; i<1000; i++)
        {
            if(i%8==0)
            v.pb(i);
        }

        for(int i=0; i<v.sz; i++)
        {
            vis.clear();
            q= to_string(v[i]);
            int f=0;
            for(int j=0; j<q.sz; j++)
            {
                vis[q[j]]++;
                if(vis[q[j]]>m[q[j]])
                {
                    f=1;
                }
            }
            if(f==0)
            {
                pfy;
              return 0;
            }



        }

        pfn;
        return 0;
    }
}

