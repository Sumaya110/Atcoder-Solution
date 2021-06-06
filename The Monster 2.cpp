#include<bits\stdc++.h>
using namespace std;


int main()
{
    string s;
    cin>>s;
    long long  ans=0;
    for(int i=0; i<s.size(); i++)
    {
        int l=0, r=0;
        for(int j=i; j<s.size(); j++)
        {
            if(s[j]=='(') l++,r++;
            else if(s[j]==')') l--,r--;
            else l++, r--;
            if(l<0) break;
            if(r<0) r+=2;
            if(r==0) ans++;
        }
    }
    cout<<ans<<endl;
}
