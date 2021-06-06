#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define md 1000000007

ll a[10010];
map<ll,ll>m,mm;
map<ll,ll> :: iterator it;

int main()
{

   ll n,i,j,k,p,mx=0,lcm=1;
   cin>>n;

   for(i=0; i<n; i++)
   {
       cin>>a[i];
       mx=max(mx,a[i]);
   }

   for(j=0; j<n; j++)
   {
       m.clear();
       p=a[j];
       while(p%2==0)
       {
           m[2]++;
           p/=2;
       }
       mm[2]=max(mm[2],m[2]);

       for(i=3; i*i<=n; i=i+2)
       {

           while(p%i==0)
            {
              m[i]++;
              p/=i;

            }
           mm[i]=max(mm[i],m[i]);
       }
      if(p>2)
       {
           m[p]++;
           mm[p]=max(mm[p],m[p]);
       }

   }


 for(it=mm.begin(); it!=mm.end(); it++)
 {
     ll q=it->second;
     ll i=it->first;


      if(q>0)
      {
          while(q--)
          {
              lcm*=i;

          }
      }

 }
 ll sum=0;
 for(i=0; i<n; i++)
 {
     sum=((sum%md)+((lcm/a[i])%md))%md;
     //sum=sum%md;
 }

 cout<<sum<<endl;
}

