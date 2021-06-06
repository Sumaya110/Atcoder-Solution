#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

vector<ll>f,s;
int main()
{
    ll n,a, neg=0, pos=0, last;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a;  last=a;
        if(a<0)
        {
            a=a*-1;
            s.pb(a), neg+=a;
        }
        else
        {
            f.pb(a), pos+=a;
        }
    }

    if(pos==neg)
    {
        if(s==f)
        {
            //cout<<"ne"<<" "<<last<<endl;
            if(last>=0)
                cout<<"first";
            else
                cout<<"second";
        }
        else
        {
            if(f>s)
                cout<<"first";
            else
                cout<<"second";
        }
    }
    else
    {
        if(pos>neg)
            cout<<"first";
        else
            cout<<"second";

    }
}
