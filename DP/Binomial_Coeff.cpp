#include<bits/stdc++.h>
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)

using namespace std;

ll coeff(ll n, ll k)
{
    ll c[n+1][k+1];
    for(ll i=0;i<=n;i++)
    {
        for(ll j=0;j<=min(i,k);j++)
        {
            if(j==0||j==i)
                c[i][j]=1;
            else
                c[i][j]=c[i-1][j-1]+c[i-1][j];
        }
    }
    return c[n][k];
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ll n,k;
    cin>>n>>k;
    cout<<coeff(n,k);
    return 0;
}
