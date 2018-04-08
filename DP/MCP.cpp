#include<bits/stdc++.h>
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)

using namespace std;

ll path(vector<vector<ll>>c, ll m, ll n)
{
    ll p[m][n];
    p[0][0]=c[0][0];
    for(ll i=1;i<m;i++)
        p[i][0] = p[i-1][0] + c[i][0];
    for(ll j=1;j<n;j++)
        p[0][j] = p[0][j-1] + c[0][j];
    for(ll i=1;i<m;i++)
    {
        for(ll j=1;j<n;j++)
        {
            p[i][j] = min(p[i-1][j], min(p[i][j-1], p[i-1][j-1])) + c[i][j];
        }
    }
    return p[m-1][n-1];
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ll m,n;
    cin>>m>>n;
    vector<vector<ll>> v;
    ll a;
    for(ll i=0;i<m;i++)
    {
        vector<ll> temp;
        for(ll j=0;j<n;j++)
        {
            cin>>a;
            temp.push_back(a);
        }
        v.push_back(temp);
    }
    cout<<path(v,m,n);
    return 0;
}
