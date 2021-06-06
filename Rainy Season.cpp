#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double


int main()
{
    ll n,b, mx=0, cnt=0;
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='R')
            cnt++;
        else
            cnt=0;
        mx=max(mx, cnt);
    }
    cout<<mx<<endl;
}
