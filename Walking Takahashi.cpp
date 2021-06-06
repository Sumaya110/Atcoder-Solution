#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double


int main()
{
    ll x,k,d;
    cin>>x>>k>>d;

    x=abs(x);

    ll q=min(k, x/d);
    k-=q;
    x= x- (q*d);

    if(k%2)
        k=1;
    else
        k=0;
    if(k)
        x-=d;

    cout<<abs(x);
}
