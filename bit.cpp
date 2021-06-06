#include <bits/stdc++.h>
using namespace std;
const int N =16;// 5e5 + 5;
int bit[N], p[N], ans[N], a[N];
pair<int, pair<int, int>> pr[N];

void update(int idx, int val)
{
    while (idx < N)
    {
        bit[idx] += val;
         cout<<"update "<<idx<<" "<<bit[idx]<<endl;
        idx += (idx & -idx);
    }
}

int read(int idx)
{
    int sum = 0;
    while (idx > 0)
    {
        sum += bit[idx];
        cout<<"read  "<<idx<<" "<<bit[idx]<<endl;
        idx -= (idx & -idx);
    }
    return sum;
}

int main()
{
    int n, q, x;
    cin >> n >> q;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    for (int i = 0; i < q; ++i)
    {
        cin >> pr[i].second.first >> pr[i].first;
        pr[i].second.second = i;
    }
    sort(pr, pr + q);
    for (int i = 0; i < q; ++i)
    {
        cout<<pr[i].second.first<<" "<<pr[i].first<<" "<<pr[i].second.second<<endl;
    }
    memset(p, -1, sizeof(p));
    memset(bit, 0, sizeof(bit));
    x = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (p[a[i]] != -1)
            update(p[a[i]], -1);
        p[a[i]] = i;
        update(i, 1);
        while (x < q and pr[x].first == i)
        {
            ans[pr[x].second.second] = read(pr[x].first) - read(pr[x].second.first - 1);
            x++;
        }
    }
    for (int i = 0; i < q; ++i)
        cout << ans[i] << "\n";
    return 0;
}
