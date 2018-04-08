#include<bits/stdc++.h>
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)

using namespace std;

ll lis(ll a[], ll n)
{
    ll l[n], maxi=0;
    for(ll i=0;i<n;i++)
        l[i]=1;
    for(ll i=1;i<n;i++)
    {
        for(ll j=0;j<i;j++)
        {
            if(a[i]>a[j] && l[i]<l[j]+1)
                l[i]=l[j]+1;
        }
    }
    for(ll i=0;i<n;i++)
        maxi=max(maxi,l[i]);
    return maxi;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
        cin>>a[i];
    cout<<lis(a, n);
    return 0;
}
