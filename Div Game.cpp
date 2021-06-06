#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 1000000

ll vis[1000100];
vector<ll>prime;
void prime_factorization()
{
    vis[0]=1, vis[1]=1;

    for(int i=2; i<=mx; i++)
    {
        if(vis[i]==0)
        {
            prime.push_back(i);
            for(int j=i*2; j<=mx; j+=i)
                vis[j]=1;
        }
    }
}

int main()
{
    ll n,i,j,k, ans=0;
    //cin>>n;
    prime_factorization();

    cout<<prime.size()<<endl;

    /*for(int i=0; i<prime.size() && prime[i]*prime[i]<=n; i++)
    {
        ll cnt=0, prev=0;
        if(n%prime[i]==0)
        {
            while(n%prime[i]==0)
            {
               // cout<<cnt<<endl;
                cnt++;
                n/=prime[i];
                if(cnt>prev)
                {
                    ans++; prev=cnt; cnt=0;
                }

            }
        }
    }

    if(n>1) ans++;
    cout<<ans<<endl;*/
}
