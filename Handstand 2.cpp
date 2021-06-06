#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll ar[20][20];

int main()
{
   ll n,m,a,b,i,j,k,total=0;

    cin>>n;

    for(i=1; i<=n; i++)
    {
        b=i;
        a=b%10;
        while(b>=10)
        {
            b/=10;
        }
        ar[a][b]++;
        //ar[b][a]++;

    }

    for(i=0; i<=9; i++)
    {
        for(j=0; j<=9; j++)
        {
            total+=ar[i][j]*ar[j][i];
        }
    }

    cout<<total<<endl;
}
