#include<bits/stdc++.h>
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)

using namespace std;

void maxOnes(vector<vector<ll>> a, ll m, ll n)
{
    ll s[m][n];
    for(ll i=0;i<m;i++)
        s[i][0] = a[i][0];
    for(ll i=0;i<n;i++)
        s[0][i] = a[0][i];
    for(ll i=1;i<m;i++)
    {
        for(ll j=1;j<n;j++)
        {
            if(a[i][j]==1)
            {
                s[i][j] = min(s[i-1][j], min(s[i][j-1], s[i-1][j-1]))+1;
            }
            else
                s[i][j] = 0;
        }
    }
    ll max_s=LLONG_MIN, max_i=0, max_j=0;
    for(ll i=0;i<m;i++)
    {
        for(ll j=0;j<n;j++)
        {
            if(s[i][j]>max_s)
            {
                max_s=s[i][j];
                max_i=i;
                max_j=j;
            }
        }
    }
    for(ll i=max_i;i>max_i-max_s;i--)
    {
        for(ll j=max_j;j>max_j-max_s;j--)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
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
    maxOnes(v, m, n);
    return 0;
}
